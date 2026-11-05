#include <algorithm>

#include "nn/diag/diag_abort.hpp"
#include "nn/vi/vi_layer.hpp"

namespace nn::vi2 {

enum HdrColorEncoding : int32_t {};
enum HdrContentGamut : uint8_t {};
enum HdrToneMapping : uint8_t {};

Result CreateEndpoint(EndpointType* pOutEndpoint, const char* pName,
  const DisplayType* pDisplay);
void DestroyEndpoint(EndpointType* pEndpoint);
Result CreateLayer(LayerType* pOutLayer, const EndpointType* pEndpoint);
void DestroyLayer(LayerType* pLayer);
void* GetLayerNativeWindowHandle(LayerType* pLayer);
Result SetLayerNextCrop(LayerType* pLayer, uint16_t left, uint16_t top,
  uint16_t right, uint16_t bottom);
Result SetLayerNextExtendedSwapInterval(LayerType* pLayer, int interval,
  int divisor);
void ClearLayerNextExtendedSwapInterval(LayerType* pLayer);
void SetLayerNativeWindowHdrColorEncoding(LayerType* pLayer,
  HdrColorEncoding encoding);
void SetLayerNativeWindowHdrLinearColorEncoding(LayerType* pLayer,
  HdrColorEncoding encoding, uint16_t unitLuminance);
Result SetLayerNextHdrExtendedContentLuminanceRangeMetadata(LayerType* pLayer,
  uint16_t minimum, uint16_t maximum);
Result SetLayerNextHdrStandardContentLuminanceRangeMetadata(LayerType* pLayer,
  uint16_t minimum, uint16_t maximum);
void SetLayerNextHdrContentGamutMetadata(LayerType* pLayer,
  HdrContentGamut gamut);
void ClearLayerNextHdrContentGamutMetadata(LayerType* pLayer);
void SetLayerNextHdrToSdrToneMappingMetadata(LayerType* pLayer,
  HdrToneMapping mapping);
void ClearLayerNextHdrToSdrToneMappingMetadata(LayerType* pLayer);
Result SetLayerNextHdrAdjustableBezierMetadata(LayerType* pLayer, float a,
  float b, float c);
void ClearLayerNextHdrAdjustableBezierMetadata(LayerType* pLayer);

namespace sdk {

enum LayerUserDataType : int32_t {
  LayerUserDataType_Application = 5,
};

Result SetLayerNextUserData(LayerType* pLayer, LayerUserDataType type,
  uint64_t userData);

}

namespace gl {

Result SetLayerBufferSize(LayerType* pLayer, uint16_t width,
  uint16_t height);

}

}

namespace nn::gs::sdk {

void* GetNativeWindowHandle(const INativeWindow* pWindow);

}

namespace nn::vi {

namespace {

constexpr Result ResultAlreadyOpened = {0x272};
constexpr Result ResultInvalidLayerSize = {0x672};
constexpr int LayerWidthMax = 3840;
constexpr int LayerHeightMax = 2160;

bool IsHdrColorEncodingSupported(HdrColorEncoding encoding) {
  return static_cast<uint32_t>(encoding) < 2 || encoding == 0x40;
}

uint16_t ToBufferSize(int size) {
  return static_cast<uint16_t>(std::min(std::max(size, 0), 0xffff));
}

}

Result Display::Open(const char* pName) {
  os::LockMutex(&m_Mutex);
  Result result = Result();
  if (m_OpenCount == 0) {
    result = OnOpen(pName);
    if (result.IsSuccess()) {
      ++m_OpenCount;
    }
  }
  else if (m_OpenCount == -1) {
    result = ResultAlreadyOpened;
  }
  else {
    ++m_OpenCount;
  }

  os::UnlockMutex(&m_Mutex);
  return result;
}

void Display::Close(bool isForced) {
  os::LockMutex(&m_Mutex);
  if (isForced) {
    m_OpenCount = 0;
  }
  else {
    NN_ABORT_UNLESS(m_OpenCount != 0);
    if (--m_OpenCount != 0) {
      os::UnlockMutex(&m_Mutex);
      return;
    }
  }

  OnClose();
  os::UnlockMutex(&m_Mutex);
}

bool Display::IsOpen() const {
  return m_OpenCount != 0;
}

Layer::NativeWindowListener::NativeWindowListener(Layer* pLayer)
  : m_pLayer(pLayer) {}

void Layer::NativeWindowListener::OnDisconnect() {}

void Layer::NativeWindowListener::OnPresent() {
  m_pLayer->OnPresent();
}

void Layer::NativeWindowListener::OnSetNextOriginMode(
  gs::sdk::OriginMode mode) {
  Layer* pLayer = m_pLayer;
  if (!pLayer->m_OriginMode.hasValue) {
    pLayer->m_OriginMode.hasValue = true;
  }

  pLayer->m_OriginMode.value = mode;
  if (m_pLayer->m_pOriginModeChangedCallback != nullptr) {
    m_pLayer->m_pOriginModeChangedCallback(
      &m_pLayer->m_OriginModeChangedCallbackStorage, mode);
  }
}

Layer::Layer()
  : m_Listener(this),
    m_NativeWindow(&m_Listener),
    m_pOriginModeChangedCallback(nullptr),
    m_OriginModeChangedCallbackStorage(nullptr),
    m_OriginMode(),
    m_IsOpen(false),
    m_IsCreated(false) {}

Result Layer::Open(const LayerCreationSettings* pSettings, Display* pDisplay,
  const char* pName) {
  if (pSettings->GetWidth() < 1 || pSettings->GetWidth() > LayerWidthMax ||
    pSettings->GetHeight() < 1 || pSettings->GetHeight() > LayerHeightMax) {
    return ResultInvalidLayerSize;
  }

  NN_ABORT_UNLESS(!m_IsCreated);
  NN_RESULT_DO(OnOpen(pDisplay, pName));
  m_IsOpen = true;
  m_IsCreated = true;
  const uint16_t width = ToBufferSize(pSettings->GetWidth());
  const uint16_t height = ToBufferSize(pSettings->GetHeight());
  vi2::gl::SetLayerBufferSize(&m_Layer, width, height);
  return Result();
}

void Layer::Close(bool isForced) {
  if (!isForced) {
    NN_ABORT_UNLESS(m_IsOpen);
  }

  m_IsOpen = false;
  NN_ABORT_UNLESS(m_IsCreated);
  NN_ABORT_UNLESS(!m_NativeWindow.IsBufferAcquired());
  OnClose();
}

bool Layer::IsCloseable() const {
  return m_IsCreated && !m_IsOpen && !m_NativeWindow.IsBufferAcquired();
}

bool Layer::IsOpen() const {
  return m_IsOpen;
}

Result Layer::SetLayerNextCrop(uint16_t left, uint16_t top, uint16_t right,
  uint16_t bottom) {
  return vi2::SetLayerNextCrop(&m_Layer, left, top, right, bottom);
}

Result Layer::SetLayerNextExtendedSwapInterval(int interval, int divisor) {
  return vi2::SetLayerNextExtendedSwapInterval(&m_Layer, interval, divisor);
}

void Layer::ClearLayerNextExtendedSwapInterval() {
  vi2::ClearLayerNextExtendedSwapInterval(&m_Layer);
}

void Layer::SetLayerNativeWindowHdrColorEncoding(HdrColorEncoding encoding) {
  if (IsHdrColorEncodingSupported(encoding)) {
    vi2::SetLayerNativeWindowHdrColorEncoding(&m_Layer,
      static_cast<vi2::HdrColorEncoding>(encoding));
  }
}

void Layer::SetLayerNativeWindowHdrLinearColorEncoding(
  HdrColorEncoding encoding, uint16_t unitLuminance) {
  if (IsHdrColorEncodingSupported(encoding)) {
    vi2::SetLayerNativeWindowHdrLinearColorEncoding(&m_Layer,
      static_cast<vi2::HdrColorEncoding>(encoding), unitLuminance);
  }
}

Result Layer::SetNextHdrExtendedContentLuminanceRangeMetadata(
  uint16_t minimum, uint16_t maximum) {
  return vi2::SetLayerNextHdrExtendedContentLuminanceRangeMetadata(&m_Layer,
    minimum, maximum);
}

Result Layer::SetNextHdrStandardContentLuminanceRangeMetadata(
  uint16_t minimum, uint16_t maximum) {
  return vi2::SetLayerNextHdrStandardContentLuminanceRangeMetadata(&m_Layer,
    minimum, maximum);
}

void Layer::SetNextHdrContentGamutMetadata(HdrContentGamut gamut) {
  if (gamut <= 1) {
    vi2::SetLayerNextHdrContentGamutMetadata(&m_Layer,
      static_cast<vi2::HdrContentGamut>(gamut));
  }
}

void Layer::ClearNextHdrContentGamutMetadata() {
  vi2::ClearLayerNextHdrContentGamutMetadata(&m_Layer);
}

void Layer::SetNextHdrToSdrToneMappingMetadata(HdrToneMapping mapping) {
  if (mapping <= 2) {
    vi2::SetLayerNextHdrToSdrToneMappingMetadata(&m_Layer,
      static_cast<vi2::HdrToneMapping>(mapping));
  }
}

void Layer::ClearNextHdrToSdrToneMappingMetadata() {
  vi2::ClearLayerNextHdrToSdrToneMappingMetadata(&m_Layer);
}

Result Layer::SetNextHdrAdjustableBezierMetadata(float a, float b, float c) {
  return vi2::SetLayerNextHdrAdjustableBezierMetadata(&m_Layer, a, b, c);
}

void Layer::ClearNextHdrAdjustableBezierMetadata() {
  vi2::ClearLayerNextHdrAdjustableBezierMetadata(&m_Layer);
}

Result Layer::SetNextUserData(uint64_t userData) {
  return vi2::sdk::SetLayerNextUserData(&m_Layer,
    vi2::sdk::LayerUserDataType_Application, userData);
}

void* Layer::GetNativeWindow() {
  return gs::sdk::GetNativeWindowHandle(m_NativeWindow.GetNativeWindow());
}

bool Layer::TryGetOriginMode(gs::sdk::OriginMode* pOutMode) const {
  if (m_OriginMode.hasValue) {
    *pOutMode = m_OriginMode.value;
  }

  return m_OriginMode.hasValue;
}

void Layer::OnPresent() {}

vi2::LayerType* GetInternalLayer(const Layer* pLayer) {
  return const_cast<vi2::LayerType*>(&pLayer->m_Layer);
}

void Layer::OnClose() {
  m_NativeWindow.Finalize();
  vi2::DestroyLayer(&m_Layer);
  vi2::DestroyEndpoint(&m_Endpoint);
  m_pOriginModeChangedCallback = nullptr;
  m_OriginModeChangedCallbackStorage = nullptr;
  if (m_OriginMode.hasValue) {
    m_OriginMode.hasValue = false;
  }

  m_IsCreated = false;
}

Result Layer::OnOpen(Display* pDisplay, const char* pName) {
  NN_RESULT_DO(vi2::CreateEndpoint(&m_Endpoint, pName,
    detail::ToDefaultDisplay(pDisplay)->Get()));
  const Result result = vi2::CreateLayer(&m_Layer, &m_Endpoint);
  if (result.IsFailure()) {
    vi2::DestroyEndpoint(&m_Endpoint);
    return result;
  }

  vi2::sdk::SetLayerNextUserData(&m_Layer,
    vi2::sdk::LayerUserDataType_Application, 0);
  m_NativeWindow.Initialize(vi2::GetLayerNativeWindowHandle(&m_Layer));
  return Result();
}

Result LayerWithHistory::OnOpen(Display* pDisplay, const char* pName) {
  const Result result = Layer::OnOpen(pDisplay, pName);
  if (result.IsSuccess()) {
    m_History.Initialize(&m_Layer);
  }

  return result;
}

void LayerWithHistory::OnClose() {
  Layer::OnClose();
  m_History.Finalize();
}

void LayerWithHistory::OnPresent() {
  m_History.OnPresent();
}

Result LayerWithHistory::GetLatestFrameNumber(uint64_t* pOutNumber) const {
  return m_History.GetLatestFrameNumber(pOutNumber);
}

int LayerWithHistory::ListFrameHistory(FrameInfo* pOutInfos,
  int count) const {
  return m_History.ListFrameHistory(pOutInfos, count);
}

}
