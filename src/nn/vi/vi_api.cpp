#include <string.h>
#include <strings.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/vi/vi_layer.hpp"

namespace nn::gs::sdk {

void CheckGraphicsSystemInitialized(const char* pFunctionName,
  size_t length);

}

namespace nn::am {

Result SetCopyrightLayerEnabled(bool isEnabled);
Result SetRecordingLayerEnabled(bool isEnabled);
Result SetSharingLayerEnabled(bool isEnabled);
Result SetMovieMakerLayerEnabled(bool isEnabled);

}

namespace nn::vi2 {

enum RefreshRate : int32_t {};
enum RefreshRateCapability : int32_t {};
enum HdrOutputFormat : int32_t {};
enum HdrOutputFormatCapability : int32_t {};

void Initialize();
void SetDisplayRefreshRateCapability(DisplayType* pDisplay, RefreshRate rate,
  RefreshRateCapability capability);
void SetDisplayHdrOutputFormatCapability(DisplayType* pDisplay,
  HdrOutputFormat format, HdrOutputFormatCapability capability);

}

namespace nn::vi {

enum OriginMode : int32_t {
  OriginMode_TopLeft,
  OriginMode_BottomLeft,
};

}

namespace nn::vi {

namespace detail {

extern os::MutexType g_InitializeMutex;
extern uint64_t g_InitializeCount;
extern DefaultDisplay g_DefaultDisplay;
extern LayerWithHistory g_Layer;
extern Layer g_RecordingLayer;
extern Layer g_MovieMakerLayer;
extern Layer g_SharingLayer;
extern CopyrightFramebuffer g_CopyrightFramebuffer;

bool IsInitialized() {
  return g_InitializeCount != 0;
}

bool IsDefaultDisplay(const Display* pDisplay) {
  return pDisplay == &g_DefaultDisplay;
}

DefaultDisplay* ToDefaultDisplay(Display* pDisplay) {
  NN_ABORT_UNLESS(pDisplay == &g_DefaultDisplay);
  return &g_DefaultDisplay;
}

const DefaultDisplay* ToDefaultDisplay(const Display* pDisplay) {
  NN_ABORT_UNLESS(pDisplay == &g_DefaultDisplay);
  return &g_DefaultDisplay;
}

}

namespace {

constexpr Result ResultAlreadyOpened = {0x272};
constexpr Result ResultInvalidDisplay = {0xc72};
constexpr Result ResultDisplayNotFound = {0xe72};
constexpr int LayerWidthMax = 3840;
constexpr int LayerHeightMax = 2160;
constexpr int CopyrightFramebufferWidth = 1920;
constexpr int CopyrightFramebufferHeight = 1080;
constexpr vi2::RefreshRate VariableRefreshRate = vi2::RefreshRate(-1);
constexpr vi2::RefreshRate RefreshRate120Hz = vi2::RefreshRate(120);
constexpr vi2::HdrOutputFormat HdrOutputFormatPrivate =
  vi2::HdrOutputFormat(1);

// The extra layers only differ by their object and their name.
inline Result CreateNamedLayerImpl(Layer** pOutLayer, Layer* pLayer,
  Display* pDisplay, const LayerCreationSettings* pSettings,
  const char* pName) {
  *pOutLayer = nullptr;
  if (pLayer->IsOpen()) {
    return ResultAlreadyOpened;
  }
  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultInvalidDisplay;
  }
  NN_RESULT_DO(pLayer->Open(pSettings, &detail::g_DefaultDisplay, pName));
  *pOutLayer = pLayer;
  return Result();
}

inline Result OpenDisplayImpl(Display** pOutDisplay, const char* pName) {
  *pOutDisplay = nullptr;
  const char* pInternalName;
  if (strcasecmp(pName, "Default") == 0) {
    pInternalName = "default";
  }
  else if (strcasecmp(pName, "rtc") == 0) {
    pInternalName = "rtc";
  }
  else {
    return ResultDisplayNotFound;
  }

  NN_RESULT_DO(detail::g_DefaultDisplay.Open(pInternalName));
  *pOutDisplay = &detail::g_DefaultDisplay;
  return Result();
}

inline Result CreateLayerImpl(Layer** pOutLayer, Display* pDisplay,
  const LayerCreationSettings* pSettings) {
  *pOutLayer = nullptr;
  if (detail::g_Layer.IsOpen()) {
    return ResultAlreadyOpened;
  }

  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultInvalidDisplay;
  }

  NN_RESULT_DO(detail::g_Layer.Open(pSettings, &detail::g_DefaultDisplay,
    "default"));
  *pOutLayer = &detail::g_Layer;
  return Result();
}

}

void Initialize() {
  os::LockMutex(&detail::g_InitializeMutex);
  gs::sdk::CheckGraphicsSystemInitialized("nn::vi::Initialize",
    sizeof("nn::vi::Initialize"));
  if (detail::g_InitializeCount++ == 0) {
    vi2::Initialize();
  }

  os::UnlockMutex(&detail::g_InitializeMutex);
}

int ListDisplays(DisplayInfo* pOutInfos, int count) {
  if (pOutInfos == nullptr || count == 0) {
    return 0;
  }

  constexpr char DefaultDisplayName[sizeof(pOutInfos->name)] = "Default";
  memcpy(pOutInfos->name, DefaultDisplayName, sizeof(DefaultDisplayName));
  pOutInfos->hasLayerLimit = true;
  pOutInfos->layerCountMax = 1;
  pOutInfos->layerWidthPixelCountMax = LayerWidthMax;
  pOutInfos->layerHeightPixelCountMax = LayerHeightMax;
  return 1;
}

Result OpenDefaultDisplay(Display** pOutDisplay) {
  return OpenDisplayImpl(pOutDisplay, "Default");
}

Result OpenDisplay(Display** pOutDisplay, const char* pName) {
  return OpenDisplayImpl(pOutDisplay, pName);
}

void CloseDisplay(Display* pDisplay) {
  pDisplay->Close(false);
}

Result GetDisplayVsyncEvent(os::SystemEventType* pOutEvent,
  Display* pDisplay) {
  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultInvalidDisplay;
  }

  return detail::g_DefaultDisplay.DuplicateVsyncEvent(pOutEvent);
}

Result CreateLayer(Layer** pOutLayer, Display* pDisplay) {
  const LayerCreationSettings settings;
  return CreateLayerImpl(pOutLayer, pDisplay, &settings);
}

Result CreateLayer(Layer** pOutLayer, Display* pDisplay,
  const LayerCreationSettings* pSettings) {
  return CreateLayerImpl(pOutLayer, pDisplay, pSettings);
}

Result CreateLayer(Layer** pOutLayer, Display* pDisplay, int width,
  int height) {
  const LayerCreationSettings settings(width, height);
  return CreateLayerImpl(pOutLayer, pDisplay, &settings);
}

void DestroyLayer(Layer* pLayer) {
  pLayer->Close(false);
}

Result SetLayerCrop(Layer* pLayer, int left, int top, int right,
  int bottom) {
  return pLayer->SetLayerNextCrop(left, top, right, bottom);
}

Result SetLayerUserData(Layer* pLayer, uint64_t userData) {
  return pLayer->SetNextUserData(userData);
}

Result SetLayerExtendedSwapInterval(Layer* pLayer, int interval,
  int divisor) {
  return pLayer->SetLayerNextExtendedSwapInterval(interval, divisor);
}

void ClearLayerExtendedSwapInterval(Layer* pLayer) {
  pLayer->ClearLayerNextExtendedSwapInterval();
}

Result QueryDisplayAvailableRefreshRates(int* pOutCount,
  AvailableRefreshRate* pOutRates, int count, Display* pDisplay) {
  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultInvalidDisplay;
  }

  const Span<AvailableRefreshRate> rates = {pOutRates,
    pOutRates != nullptr ? static_cast<uintptr_t>(count) : 0};
  return detail::g_DefaultDisplay.QueryAvailableRefreshRates(rates,
    pOutCount);
}

Result GetNativeWindow(void** pOutWindow, Layer* pLayer) {
  *pOutWindow = pLayer->GetNativeWindow();
  return Result();
}

// Only the single layer exists, so the layer argument is not used.
Result GetLatestFrameNumber(uint64_t* pOutNumber, const Layer*) {
  return detail::g_Layer.GetLatestFrameNumber(pOutNumber);
}

int ListFrameHistory(FrameInfo* pOutInfos, int count, const Layer*) {
  return detail::g_Layer.ListFrameHistory(pOutInfos, count);
}

Result SetRecordingLayerEnabled(bool isEnabled) {
  return am::SetRecordingLayerEnabled(isEnabled);
}

Result CreateRecordingLayer(Layer** pOutLayer, Display* pDisplay,
  const LayerCreationSettings* pSettings) {
  return CreateNamedLayerImpl(pOutLayer, &detail::g_RecordingLayer, pDisplay,
    pSettings, "capture");
}

Result SetSharingLayerEnabled(bool isEnabled) {
  return am::SetSharingLayerEnabled(isEnabled);
}

Result CreateSharingLayer(Layer** pOutLayer, Display* pDisplay,
  const LayerCreationSettings* pSettings) {
  return CreateNamedLayerImpl(pOutLayer, &detail::g_SharingLayer, pDisplay,
    pSettings, "share");
}

void SetCopyrightCompositionEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(am::SetCopyrightLayerEnabled(isEnabled));
}

void InitializeCopyrightFramebuffer(void* pMemory, size_t size) {
  detail::g_CopyrightFramebuffer.Initialize(pMemory, size,
    CopyrightFramebufferWidth, CopyrightFramebufferHeight);
}

void FinalizeCopyrightFramebuffer() {
  detail::g_CopyrightFramebuffer.Finalize();
}

// The framebuffer counts rows the other way around.
void WriteToCopyrightFramebuffer(const void* pImage, size_t size, int x,
  int y, int width, int height, OriginMode mode) {
  switch (mode) {
    case OriginMode_TopLeft:
      detail::g_CopyrightFramebuffer.WriteImage(pImage, size, x, y, width,
        height, gs::sdk::OriginMode(1));
      return;
    case OriginMode_BottomLeft:
      detail::g_CopyrightFramebuffer.WriteImage(pImage, size, x, y, width,
        height, gs::sdk::OriginMode(0));
      return;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result SetMovieMakerLayerEnabled(bool isEnabled) {
  return am::SetMovieMakerLayerEnabled(isEnabled);
}

Result CreateMovieMakerLayer(Layer** pOutLayer, Display* pDisplay,
  const LayerCreationSettings* pSettings) {
  return CreateNamedLayerImpl(pOutLayer, &detail::g_MovieMakerLayer,
    pDisplay, pSettings, "mvmaker");
}

// The variable rate is hidden from callers that do not ask for it.
Result QueryDisplayCurrentRefreshRate(RefreshRate* pOutRate,
  const Display* pDisplay) {
  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultAlreadyOpened;
  }
  bool isVariable = false;
  const Result result = detail::g_DefaultDisplay.QueryRefreshRate(pOutRate,
    &isVariable);
  if (result.IsSuccess() && isVariable) {
    *pOutRate = RefreshRate{};
  }
  return result;
}

Result QueryDisplayCurrentRefreshRate(RefreshRate* pOutRate,
  bool* pOutIsVariable, const Display* pDisplay) {
  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultAlreadyOpened;
  }
  return detail::g_DefaultDisplay.QueryRefreshRate(pOutRate, pOutIsVariable);
}

void SetDisplayVrrCapability(Display* pDisplay, bool isEnabled) {
  if (pDisplay == &detail::g_DefaultDisplay) {
    vi2::SetDisplayRefreshRateCapability(detail::g_DefaultDisplay.Get(),
      VariableRefreshRate, vi2::RefreshRateCapability(isEnabled));
  }
}

void SetDisplay120HzRefreshRateCapability(Display* pDisplay, bool isEnabled) {
  if (pDisplay == &detail::g_DefaultDisplay) {
    vi2::SetDisplayRefreshRateCapability(detail::g_DefaultDisplay.Get(),
      RefreshRate120Hz, vi2::RefreshRateCapability(isEnabled));
  }
}

Result QueryDisplayHdrStatus(bool* pOutIsEnabled, HdrOutputFormat* pOutFormat,
  uint16_t* pOutLuminance, const Display* pDisplay) {
  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultAlreadyOpened;
  }
  return detail::g_DefaultDisplay.QueryHdrStatus(pOutIsEnabled, pOutFormat,
    pOutLuminance);
}

Result QueryDisplayHdrPaperWhite(uint16_t* pOutLuminance,
  const Display* pDisplay) {
  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultAlreadyOpened;
  }
  return detail::g_DefaultDisplay.QueryHdrPaperWhite(pOutLuminance);
}

void SetDisplayHdrCapabilityPrivate(Display* pDisplay, bool isEnabled) {
  if (pDisplay == &detail::g_DefaultDisplay) {
    vi2::SetDisplayHdrOutputFormatCapability(detail::g_DefaultDisplay.Get(),
      HdrOutputFormatPrivate, vi2::HdrOutputFormatCapability(isEnabled));
  }
}

Result SetLayerNextHdrExtendedContentLuminanceRangeMetadata(Layer* pLayer,
  uint16_t minimum, uint16_t maximum) {
  return pLayer->SetNextHdrExtendedContentLuminanceRangeMetadata(minimum,
    maximum);
}

Result SetLayerNextHdrStandardContentLuminanceRangeMetadata(Layer* pLayer,
  uint16_t minimum, uint16_t maximum) {
  return pLayer->SetNextHdrStandardContentLuminanceRangeMetadata(minimum,
    maximum);
}

void SetLayerNextHdrContentGamutMetadata(Layer* pLayer,
  HdrContentGamut gamut) {
  pLayer->SetNextHdrContentGamutMetadata(gamut);
}

void ClearLayerNextHdrContentGamutMetadata(Layer* pLayer) {
  pLayer->ClearNextHdrContentGamutMetadata();
}

void SetLayerNextHdrToSdrToneMappingMetadata(Layer* pLayer,
  HdrToneMapping mapping) {
  pLayer->SetNextHdrToSdrToneMappingMetadata(mapping);
}

void ClearLayerNextHdrToSdrToneMappingMetadata(Layer* pLayer) {
  pLayer->ClearNextHdrToSdrToneMappingMetadata();
}

Result SetLayerNextHdrAdjustableBezierMetadata(Layer* pLayer, float a,
  float b, float c) {
  return pLayer->SetNextHdrAdjustableBezierMetadata(a, b, c);
}

void ClearLayerNextHdrAdjustableBezierMetadata(Layer* pLayer) {
  pLayer->ClearNextHdrAdjustableBezierMetadata();
}

Result QueryDisplayBufferMaxResolution(BufferMaxResolution* pOutResolution,
  const Display* pDisplay) {
  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultAlreadyOpened;
  }
  return detail::g_DefaultDisplay.QueryBufferMaxResolution(pOutResolution);
}

Result QueryDisplayVrrSupported(bool* pOutIsSupported,
  const Display* pDisplay) {
  if (pDisplay != &detail::g_DefaultDisplay) {
    return ResultAlreadyOpened;
  }
  return detail::g_DefaultDisplay.QueryVrrSupported(pOutIsSupported);
}

}
