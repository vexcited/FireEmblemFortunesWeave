#pragma once

#include <cstddef>
#include <cstdint>

namespace nn::gs {

struct NativeImageHandle {
  uint32_t value;
};

struct NativeSyncHandle {
  uint64_t value[4];
};

namespace sdk {

enum NativeWindowAttribute : int {};
enum OriginMode : int {};
enum NativeImageContentGamut : int {};
enum NativeImageToneMapping : int {};
enum NativeImageColorSpace : int {};

struct NativeWindowImageType;
struct NativeWindowImagePreference;

using AllocateFunction = void *(*)(size_t size, size_t alignment, void *user);
using FreeFunction = void (*)(void *pointer, void *user);

class INativeWindow {
public:
  virtual ~INativeWindow() = default;

  virtual int Connect(const char *name, NativeWindowAttribute attribute) = 0;
  virtual void Disconnect() = 0;
  virtual bool IsConnected() = 0;
  virtual void* GetHandle() = 0;
  virtual int CreateAliasImagePool(NativeImageHandle image, uint32_t count) = 0;
  virtual int DestroyAliasImagePool(NativeImageHandle image) = 0;
  virtual int RegisterAliasBuffer(uint32_t index, NativeImageHandle image) = 0;
  virtual int UnregisterAliasBuffer(uint32_t index) = 0;

  virtual int CreateBuffer(
    uint32_t *outIndex, NativeWindowImageType **outImage,
    const NativeWindowImagePreference &preference,
    AllocateFunction allocate, FreeFunction free, void *user
  ) = 0;

  virtual int DestroyBuffer(uint32_t index, NativeWindowImageType *image) = 0;

  virtual int QueryImageHandle(NativeImageHandle *outImage, uint32_t index) = 0;

  virtual int AcquireBuffer(uint32_t *outIndex, NativeSyncHandle *outSync) = 0;
  virtual int PresentBuffer(uint32_t index, const NativeSyncHandle &sync) = 0;

  virtual int ForceAcquireBuffer(
    uint32_t *outIndex, NativeSyncHandle *outSync
  ) = 0;

  virtual bool IsSwapIntervalSupported() = 0;
  virtual int SetNextSwapInterval(int interval) = 0;
  virtual bool IsCropSupported() = 0;
  virtual int SetNextCrop(int left, int top, int right, int bottom) = 0;
  virtual bool IsOriginModeSupported() = 0;
  virtual void SetNextOriginMode(OriginMode mode) = 0;

  virtual int SetNextHdrExtendedContentLuminanceRangeMetadata(
    uint16_t min, uint16_t max
  ) = 0;

  virtual int SetNextHdrStandardContentLuminanceRangeMetadata(
    uint16_t min, uint16_t max
  ) = 0;

  virtual int SetNextHdrContentGamutMetadata(
    NativeImageContentGamut gamut
  ) = 0;

  virtual int ClearNextHdrContentGamutMetadata() = 0;

  virtual int SetNextHdrToSdrToneMappingMetadata(
    NativeImageToneMapping mapping
  ) = 0;

  virtual int ClearNextHdrToSdrToneMappingMetadata() = 0;
  virtual int SetNextHdrAdjustableBezierMetadata(float a, float b, float c) = 0;
  virtual int ClearNextHdrAdjustableBezierMetadata() = 0;
  virtual int GetBufferSize(uint16_t *outWidth, uint16_t *outHeight) = 0;

  virtual bool TryGetNextCrop(
    uint16_t *outLeft, uint16_t *outTop, uint16_t *outRight,
    uint16_t *outBottom
  ) = 0;

  virtual NativeImageColorSpace GetColorSpace() = 0;
  virtual uint16_t GetLinearUnitLuminance() = 0;
  virtual int SetColorSpace(NativeImageColorSpace colorSpace) = 0;
  virtual int SetLinearUnitLuminance(uint16_t luminance) = 0;
};

void *GetNativeWindowHandle(const INativeWindow *window);

int ConnectNativeWindow(
  void *window, const char *name, NativeWindowAttribute attribute
);

void DisconnectNativeWindow(void *window);

int CreateNativeWindowAliasImagePool(
  void *window, NativeImageHandle image, uint32_t count
);

int DestroyNativeWindowAliasImagePool(void *window, NativeImageHandle image);

int RegisterNativeWindowAliasBuffer(
  void *window, uint32_t index, NativeImageHandle image
);

int UnregisterNativeWindowAliasBuffer(void *window, uint32_t index);

int CreateNativeWindowBuffer(
  uint32_t *outIndex, NativeWindowImageType **outImage, void *window,
  const NativeWindowImagePreference &preference, AllocateFunction allocate,
  FreeFunction free, void *user
);

int DestroyNativeWindowBuffer(
  void *window, uint32_t index, NativeWindowImageType *image
);

int QueryNativeWindowImageHandle(
  NativeImageHandle *outImage, void *window, uint32_t index
);

int AcquireNativeWindowBuffer(
  uint32_t *outIndex, NativeSyncHandle *outSync, void *window
);

int PresentNativeWindowBuffer(
  void *window, uint32_t index, const NativeSyncHandle &sync
);

int ForceAcquireNativeWindowBuffer(
  uint32_t *outIndex, NativeSyncHandle *outSync, void *window
);

bool IsNativeWindowSwapIntervalSupported(void *window);
int SetNativeWindowNextSwapInterval(void *window, int interval);
bool IsNativeWindowCropSupported(void *window);

int SetNativeWindowNextCrop(
  void *window, int left, int top, int right, int bottom
);

bool IsNativeWindowOriginModeSupported(void *window);
void SetNativeWindowNextOrigin(void *window, OriginMode mode);

int SetNativeWindowNextHdrExtendedContentLuminanceRangeMetadata(
  void *window, uint16_t min, uint16_t max
);

int SetNativeWindowNextHdrStandardContentLuminanceRangeMetadata(
  void *window, uint16_t min, uint16_t max
);

int SetNativeWindowNextHdrContentGamutMetadata(
  void *window, NativeImageContentGamut gamut
);

int ClearNativeWindowNextHdrContentGamutMetadata(void *window);

int SetNativeWindowNextHdrToSdrToneMappingMetadata(
  void *window, NativeImageToneMapping mapping
);

int ClearNativeWindowNextHdrToSdrToneMappingMetadata(void *window);

int SetNativeWindowNextHdrAdjustableBezierMetadata(
  void *window, float a, float b, float c
);

int ClearNativeWindowNextHdrAdjustableBezierMetadata(void *window);

int GetNativeWindowBufferSize(
  uint16_t *outWidth, uint16_t *outHeight, void *window
);

bool TryGetNativeWindowNextCrop(
  uint16_t *outLeft, uint16_t *outTop, uint16_t *outRight,
  uint16_t *outBottom, void *window
);

NativeImageColorSpace GetNativeWindowColorSpace(void *window);
uint16_t GetNativeWindowLinearUnitLuminance(void *window);

int SetNativeWindowColorSpace(
  void *window, NativeImageColorSpace colorSpace
);

int SetNativeWindowLinearUnitLuminance(void *window, uint16_t luminance);

}

}
