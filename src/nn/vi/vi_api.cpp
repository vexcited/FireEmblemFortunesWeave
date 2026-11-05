#include <string.h>
#include <strings.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/vi/vi_layer.hpp"

namespace nn::gs::sdk {

void CheckGraphicsSystemInitialized(const char* pFunctionName,
  size_t length);

}

namespace nn::vi2 {

void Initialize();

}

namespace nn::vi {

namespace detail {

extern os::MutexType g_InitializeMutex;
extern uint64_t g_InitializeCount;
extern DefaultDisplay g_DefaultDisplay;
extern LayerWithHistory g_Layer;

}

namespace {

constexpr Result ResultAlreadyOpened = {0x272};
constexpr Result ResultInvalidDisplay = {0xc72};
constexpr Result ResultDisplayNotFound = {0xe72};
constexpr int LayerWidthMax = 3840;
constexpr int LayerHeightMax = 2160;

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

}
