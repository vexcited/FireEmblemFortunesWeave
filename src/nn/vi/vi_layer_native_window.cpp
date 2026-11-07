#include "nn/vi/vi_layer.hpp"

namespace nn::vi::detail {

LayerNativeWindow::LayerNativeWindow(INativeWindowListener* pListener) :
  m_pHandle(nullptr), m_IsBufferAcquired(false), m_pListener(pListener) {}

void LayerNativeWindow::Initialize(void* pNativeWindowHandle) {
  m_pHandle = pNativeWindowHandle;
}

void LayerNativeWindow::Finalize() {
  m_pHandle = nullptr;
}

int LayerNativeWindow::Connect(const char* pName,
  gs::sdk::NativeWindowAttribute attribute) {
  const int result = gs::sdk::ConnectNativeWindow(m_pHandle, pName,
    attribute);
  if (result == 0) {
    m_IsBufferAcquired = true;
  }
  return result;
}

void LayerNativeWindow::Disconnect() {
  m_IsBufferAcquired = false;
  gs::sdk::DisconnectNativeWindow(m_pHandle);
  m_pListener->OnDisconnect();
}

bool LayerNativeWindow::IsConnected() {
  return m_IsBufferAcquired;
}

void* LayerNativeWindow::GetHandle() {
  return gs::sdk::GetNativeWindowHandle(this);
}

int LayerNativeWindow::CreateAliasImagePool(gs::NativeImageHandle image,
  uint32_t count) {
  return gs::sdk::CreateNativeWindowAliasImagePool(m_pHandle, image, count);
}

int LayerNativeWindow::DestroyAliasImagePool(gs::NativeImageHandle image) {
  return gs::sdk::DestroyNativeWindowAliasImagePool(m_pHandle, image);
}

int LayerNativeWindow::RegisterAliasBuffer(uint32_t index,
  gs::NativeImageHandle image) {
  return gs::sdk::RegisterNativeWindowAliasBuffer(m_pHandle, index, image);
}

int LayerNativeWindow::UnregisterAliasBuffer(uint32_t index) {
  return gs::sdk::UnregisterNativeWindowAliasBuffer(m_pHandle, index);
}

int LayerNativeWindow::CreateBuffer(uint32_t* pOutIndex,
  gs::sdk::NativeWindowImageType** ppOutImage,
  const gs::sdk::NativeWindowImagePreference& preference,
  gs::sdk::AllocateFunction allocate, gs::sdk::FreeFunction free,
  void* pUser) {
  return gs::sdk::CreateNativeWindowBuffer(pOutIndex, ppOutImage, m_pHandle,
    preference, allocate, free, pUser);
}

int LayerNativeWindow::DestroyBuffer(uint32_t index,
  gs::sdk::NativeWindowImageType* pImage) {
  return gs::sdk::DestroyNativeWindowBuffer(m_pHandle, index, pImage);
}

int LayerNativeWindow::QueryImageHandle(gs::NativeImageHandle* pOutImage,
  uint32_t index) {
  return gs::sdk::QueryNativeWindowImageHandle(pOutImage, m_pHandle, index);
}

int LayerNativeWindow::AcquireBuffer(uint32_t* pOutIndex,
  gs::NativeSyncHandle* pOutSync) {
  return gs::sdk::AcquireNativeWindowBuffer(pOutIndex, pOutSync, m_pHandle);
}

int LayerNativeWindow::PresentBuffer(uint32_t index,
  const gs::NativeSyncHandle& sync) {
  m_pListener->OnPresent();
  return gs::sdk::PresentNativeWindowBuffer(m_pHandle, index, sync);
}

int LayerNativeWindow::ForceAcquireBuffer(uint32_t* pOutIndex,
  gs::NativeSyncHandle* pOutSync) {
  return gs::sdk::ForceAcquireNativeWindowBuffer(pOutIndex, pOutSync,
    m_pHandle);
}

bool LayerNativeWindow::IsSwapIntervalSupported() {
  return gs::sdk::IsNativeWindowSwapIntervalSupported(m_pHandle);
}

int LayerNativeWindow::SetNextSwapInterval(int interval) {
  return gs::sdk::SetNativeWindowNextSwapInterval(m_pHandle, interval);
}

bool LayerNativeWindow::IsCropSupported() {
  return gs::sdk::IsNativeWindowCropSupported(m_pHandle);
}

int LayerNativeWindow::SetNextCrop(int left, int top, int right,
  int bottom) {
  return gs::sdk::SetNativeWindowNextCrop(m_pHandle, left, top, right,
    bottom);
}

bool LayerNativeWindow::IsOriginModeSupported() {
  return gs::sdk::IsNativeWindowOriginModeSupported(m_pHandle);
}

void LayerNativeWindow::SetNextOriginMode(gs::sdk::OriginMode mode) {
  gs::sdk::SetNativeWindowNextOrigin(m_pHandle, mode);
  m_pListener->OnSetNextOriginMode(mode);
}

int LayerNativeWindow::SetNextHdrExtendedContentLuminanceRangeMetadata(
  uint16_t minimum, uint16_t maximum) {
  return gs::sdk::SetNativeWindowNextHdrExtendedContentLuminanceRangeMetadata(
    m_pHandle, minimum, maximum);
}

int LayerNativeWindow::SetNextHdrStandardContentLuminanceRangeMetadata(
  uint16_t minimum, uint16_t maximum) {
  return gs::sdk::SetNativeWindowNextHdrStandardContentLuminanceRangeMetadata(
    m_pHandle, minimum, maximum);
}

int LayerNativeWindow::SetNextHdrContentGamutMetadata(
  gs::sdk::NativeImageContentGamut gamut) {
  return gs::sdk::SetNativeWindowNextHdrContentGamutMetadata(m_pHandle,
    gamut);
}

int LayerNativeWindow::ClearNextHdrContentGamutMetadata() {
  return gs::sdk::ClearNativeWindowNextHdrContentGamutMetadata(m_pHandle);
}

int LayerNativeWindow::SetNextHdrToSdrToneMappingMetadata(
  gs::sdk::NativeImageToneMapping mapping) {
  return gs::sdk::SetNativeWindowNextHdrToSdrToneMappingMetadata(m_pHandle,
    mapping);
}

int LayerNativeWindow::ClearNextHdrToSdrToneMappingMetadata() {
  return gs::sdk::ClearNativeWindowNextHdrToSdrToneMappingMetadata(
    m_pHandle);
}

int LayerNativeWindow::SetNextHdrAdjustableBezierMetadata(float a, float b,
  float c) {
  return gs::sdk::SetNativeWindowNextHdrAdjustableBezierMetadata(m_pHandle,
    a, b, c);
}

int LayerNativeWindow::ClearNextHdrAdjustableBezierMetadata() {
  return gs::sdk::ClearNativeWindowNextHdrAdjustableBezierMetadata(
    m_pHandle);
}

int LayerNativeWindow::GetBufferSize(uint16_t* pOutWidth,
  uint16_t* pOutHeight) {
  return gs::sdk::GetNativeWindowBufferSize(pOutWidth, pOutHeight,
    m_pHandle);
}

bool LayerNativeWindow::TryGetNextCrop(uint16_t* pOutLeft, uint16_t* pOutTop,
  uint16_t* pOutRight, uint16_t* pOutBottom) {
  return gs::sdk::TryGetNativeWindowNextCrop(pOutLeft, pOutTop, pOutRight,
    pOutBottom, m_pHandle);
}

gs::sdk::NativeImageColorSpace LayerNativeWindow::GetColorSpace() {
  return gs::sdk::GetNativeWindowColorSpace(m_pHandle);
}

uint16_t LayerNativeWindow::GetLinearUnitLuminance() {
  return gs::sdk::GetNativeWindowLinearUnitLuminance(m_pHandle);
}

int LayerNativeWindow::SetColorSpace(
  gs::sdk::NativeImageColorSpace colorSpace) {
  return gs::sdk::SetNativeWindowColorSpace(m_pHandle, colorSpace);
}

int LayerNativeWindow::SetLinearUnitLuminance(uint16_t luminance) {
  return gs::sdk::SetNativeWindowLinearUnitLuminance(m_pHandle, luminance);
}

}
