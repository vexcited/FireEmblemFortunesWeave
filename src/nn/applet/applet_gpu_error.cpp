#include <mutex>

#include "nn/am/service/am_controllers.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/util/optional.hpp"

namespace nn::applet {

void BeginAutoSleepDisabledSection();
void EndAutoSleepDisabledSection();
void BeginManualGpuErrorHandling();
void EndManualGpuErrorHandling();
size_t GetGpuErrorInfoSize();
size_t GetGpuErrorInfo(void* buffer, size_t size);
os::SystemEventType* GetGpuErrorEvent();
void FinishGpuErrorHandling();
os::SystemEventType* GetGpuErrorEventForApplet();

namespace {

using am::service::IGpuErrorHandler;

struct AutoSleepDisabledState {
  os::SdkMutex mutex;
  uint64_t count;
};

struct GpuErrorState {
  os::SdkMutex mutex;
  IGpuErrorHandler* pHandler;
  os::SystemEventType event;
};

struct GpuErrorEventForAppletState {
  os::SdkMutex mutex;
  util::optional<os::SystemEvent> event;
};

AutoSleepDisabledState g_AutoSleepDisabled;
GpuErrorState g_GpuError;
GpuErrorEventForAppletState g_GpuErrorForApplet;

}

void BeginAutoSleepDisabledSection() {
  std::lock_guard<os::SdkMutex> lock(g_AutoSleepDisabled.mutex);
  if (g_AutoSleepDisabled.count == 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      am::service::GetSelfControllerObject()->SetAutoSleepDisabled(true));
  }
  ++g_AutoSleepDisabled.count;
}

void EndAutoSleepDisabledSection() {
  std::lock_guard<os::SdkMutex> lock(g_AutoSleepDisabled.mutex);
  if (g_AutoSleepDisabled.count != 0) {
    if (--g_AutoSleepDisabled.count == 0) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        am::service::GetSelfControllerObject()->SetAutoSleepDisabled(false));
    }
  }
}

void BeginManualGpuErrorHandling() {
  std::lock_guard<os::SdkMutex> lock(g_GpuError.mutex);
  if (g_GpuError.pHandler == nullptr) {
    sf::SharedPointer<IGpuErrorHandler> handler;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      am::service::GetCommonStateGetterObject()->GetGpuErrorHandler(
        sf::Out<sf::SharedPointer<IGpuErrorHandler>>(&handler)));
    g_GpuError.pHandler = handler.Detach();
  }
}

void EndManualGpuErrorHandling() {
  std::lock_guard<os::SdkMutex> lock(g_GpuError.mutex);
  g_GpuError.pHandler->Release();
  g_GpuError.pHandler = nullptr;
}

size_t GetGpuErrorInfoSize() {
  std::lock_guard<os::SdkMutex> lock(g_GpuError.mutex);
  uint64_t size = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_GpuError.pHandler->GetManualGpuErrorInfoSize(sf::Out<uint64_t>(&size)));
  return size;
}

size_t GetGpuErrorInfo(void* buffer, size_t size) {
  std::lock_guard<os::SdkMutex> lock(g_GpuError.mutex);
  uint64_t infoSize = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_GpuError.pHandler->GetManualGpuErrorInfo(
    sf::Out<uint64_t>(&infoSize), sf::OutBuffer(buffer, size)));
  return infoSize;
}

os::SystemEventType* GetGpuErrorEvent() {
  std::lock_guard<os::SdkMutex> lock(g_GpuError.mutex);
  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_GpuError.pHandler->GetManualGpuErrorDetectionSystemEvent(
      sf::Out<sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(&g_GpuError.event,
    handle.GetOsHandle(), handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  return &g_GpuError.event;
}

void FinishGpuErrorHandling() {
  std::lock_guard<os::SdkMutex> lock(g_GpuError.mutex);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_GpuError.pHandler->FinishManualGpuErrorHandling());
}

os::SystemEventType* GetGpuErrorEventForApplet() {
  std::lock_guard<os::SdkMutex> lock(g_GpuErrorForApplet.mutex);
  if (!g_GpuErrorForApplet.event.has_value()) {
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      am::service::GetAppletCommonFunctionsObject()
        ->GetGpuErrorDetectedSystemEvent(sf::Out<sf::NativeHandle>(&handle)));
    g_GpuErrorForApplet.event.emplace().AttachReadableHandle(
      handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_ManualClear);
    handle.Detach();
  }
  return g_GpuErrorForApplet.event->GetBase();
}

}
