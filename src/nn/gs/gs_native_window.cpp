#include <nn/gs/gs_native_window.hpp>

namespace nn::gs::sdk {

void *GetNativeWindowHandle(const INativeWindow *window) {
  return const_cast<INativeWindow *>(window);
}

static INativeWindow *ToWindow(void *window) {
  return static_cast<INativeWindow *>(window);
}

int ConnectNativeWindow(
  void *window, const char *name, NativeWindowAttribute attribute
) {
  return ToWindow(window)->Connect(name, attribute);
}

void DisconnectNativeWindow(void *window) {
  ToWindow(window)->Disconnect();
}

int CreateNativeWindowAliasImagePool(
  void *window, NativeImageHandle image, uint32_t count
) {
  return ToWindow(window)->CreateAliasImagePool(image, count);
}

int DestroyNativeWindowAliasImagePool(void *window, NativeImageHandle image) {
  return ToWindow(window)->DestroyAliasImagePool(image);
}

int RegisterNativeWindowAliasBuffer(
  void *window, uint32_t index, NativeImageHandle image
) {
  return ToWindow(window)->RegisterAliasBuffer(index, image);
}

int UnregisterNativeWindowAliasBuffer(void *window, uint32_t index) {
  return ToWindow(window)->UnregisterAliasBuffer(index);
}

int CreateNativeWindowBuffer(
  uint32_t *outIndex, NativeWindowImageType **outImage, void *window,
  const NativeWindowImagePreference &preference, AllocateFunction allocate,
  FreeFunction free, void *user
) {
  return ToWindow(window)->CreateBuffer(
    outIndex, outImage, preference, allocate, free, user
  );
}

int DestroyNativeWindowBuffer(
  void *window, uint32_t index, NativeWindowImageType *image
) {
  return ToWindow(window)->DestroyBuffer(index, image);
}

int QueryNativeWindowImageHandle(
  NativeImageHandle *outImage, void *window, uint32_t index
) {
  return ToWindow(window)->QueryImageHandle(outImage, index);
}

int AcquireNativeWindowBuffer(
  uint32_t *outIndex, NativeSyncHandle *outSync, void *window
) {
  return ToWindow(window)->AcquireBuffer(outIndex, outSync);
}

int PresentNativeWindowBuffer(
  void *window, uint32_t index, const NativeSyncHandle &sync
) {
  return ToWindow(window)->PresentBuffer(index, sync);
}

int ForceAcquireNativeWindowBuffer(
  uint32_t *outIndex, NativeSyncHandle *outSync, void *window
) {
  return ToWindow(window)->ForceAcquireBuffer(outIndex, outSync);
}

bool IsNativeWindowSwapIntervalSupported(void *window) {
  return ToWindow(window)->IsSwapIntervalSupported();
}

int SetNativeWindowNextSwapInterval(void *window, int interval) {
  return ToWindow(window)->SetNextSwapInterval(interval);
}

bool IsNativeWindowCropSupported(void *window) {
  return ToWindow(window)->IsCropSupported();
}

int SetNativeWindowNextCrop(
  void *window, int left, int top, int right, int bottom
) {
  return ToWindow(window)->SetNextCrop(left, top, right, bottom);
}

bool IsNativeWindowOriginModeSupported(void *window) {
  return ToWindow(window)->IsOriginModeSupported();
}

void SetNativeWindowNextOrigin(void *window, OriginMode mode) {
  ToWindow(window)->SetNextOriginMode(mode);
}

int SetNativeWindowNextHdrExtendedContentLuminanceRangeMetadata(
  void *window, uint16_t min, uint16_t max
) {
  return ToWindow(window)->SetNextHdrExtendedContentLuminanceRangeMetadata(
    min, max
  );
}

int SetNativeWindowNextHdrStandardContentLuminanceRangeMetadata(
  void *window, uint16_t min, uint16_t max
) {
  return ToWindow(window)->SetNextHdrStandardContentLuminanceRangeMetadata(
    min, max
  );
}

int SetNativeWindowNextHdrContentGamutMetadata(
  void *window, NativeImageContentGamut gamut
) {
  return ToWindow(window)->SetNextHdrContentGamutMetadata(gamut);
}

int ClearNativeWindowNextHdrContentGamutMetadata(void *window) {
  return ToWindow(window)->ClearNextHdrContentGamutMetadata();
}

int SetNativeWindowNextHdrToSdrToneMappingMetadata(
  void *window, NativeImageToneMapping mapping
) {
  return ToWindow(window)->SetNextHdrToSdrToneMappingMetadata(mapping);
}

int ClearNativeWindowNextHdrToSdrToneMappingMetadata(void *window) {
  return ToWindow(window)->ClearNextHdrToSdrToneMappingMetadata();
}

int SetNativeWindowNextHdrAdjustableBezierMetadata(
  void *window, float a, float b, float c
) {
  return ToWindow(window)->SetNextHdrAdjustableBezierMetadata(a, b, c);
}

int ClearNativeWindowNextHdrAdjustableBezierMetadata(void *window) {
  return ToWindow(window)->ClearNextHdrAdjustableBezierMetadata();
}

int GetNativeWindowBufferSize(
  uint16_t *outWidth, uint16_t *outHeight, void *window
) {
  return ToWindow(window)->GetBufferSize(outWidth, outHeight);
}

bool TryGetNativeWindowNextCrop(
  uint16_t *outLeft, uint16_t *outTop, uint16_t *outRight, uint16_t *outBottom,
  void *window
) {
  return ToWindow(window)->TryGetNextCrop(outLeft, outTop, outRight, outBottom);
}

NativeImageColorSpace GetNativeWindowColorSpace(void *window) {
  return ToWindow(window)->GetColorSpace();
}

uint16_t GetNativeWindowLinearUnitLuminance(void *window) {
  return ToWindow(window)->GetLinearUnitLuminance();
}

int SetNativeWindowColorSpace(void *window, NativeImageColorSpace colorSpace) {
  return ToWindow(window)->SetColorSpace(colorSpace);
}

int SetNativeWindowLinearUnitLuminance(void *window, uint16_t luminance) {
  return ToWindow(window)->SetLinearUnitLuminance(luminance);
}

}
