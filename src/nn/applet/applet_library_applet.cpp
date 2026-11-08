#include <atomic>
#include <mutex>

#include "nn/am/interfaces.hpp"
#include "nn/am/service/am_library_applet.hpp"
#include "nn/am/service/am_library_applet_self.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/system_event.hpp"

namespace nn::am {

bool IsInitializedAsApplication();
service::ILibraryAppletSelfAccessor* GetLibraryAppletSelfAccessor();

}

namespace nn::applet {

enum ThemeColorType : int32_t {
  ThemeColorType_Default = 1,
};

using StartLibraryAppletHook = bool (*)(
  sf::SharedPointer<am::service::ILibraryAppletAccessor>, AppletId,
  LibraryAppletMode, void*);

void SetOnAddLibraryApplet(void (*callback)(LibraryAppletHandle));
void SetOnRemoveLibraryApplet(void (*callback)(LibraryAppletHandle));
void SetCreatingSelfLibraryApplet(bool isCreating);
AppletId GetLibraryAppletId(LibraryAppletHandle handle);
LibraryAppletMode GetLibraryAppletMode(LibraryAppletHandle handle);
void PresetLibraryAppletGpuTimeSliceZero(LibraryAppletHandle handle);
void SetStartLibraryAppletHook(StartLibraryAppletHook hook);
void RequestExitLibraryApplet(LibraryAppletHandle handle);
bool RequestExitLibraryAppletOrTerminate(
  am::service::IAppletAccessor* pAccessor, TimeSpan timeout);
bool RequestExitLibraryAppletAndWaitOrTerminate(LibraryAppletHandle handle,
  TimeSpan timeout);
void RequestExitLibraryAppletAndWait(LibraryAppletHandle handle);
void PushToInteractiveInChannel(LibraryAppletHandle handle,
  StorageHandle storage);
bool TryPopFromOutChannel(StorageHandle* pOutStorage,
  LibraryAppletHandle handle);
bool TryPopFromInteractiveOutChannel(StorageHandle* pOutStorage,
  LibraryAppletHandle handle);
os::SystemEventType* GetPopFromInteractiveOutChannelEvent(
  LibraryAppletHandle handle);
uint64_t GetIndirectLayerConsumerHandle(LibraryAppletHandle handle);
void SetOutOfFocusApplicationSuspendingEnabled(LibraryAppletHandle handle,
  bool isEnabled);
bool GetDesirableKeyboardLayout(uint32_t* pOutLayout);
void SetExpectedThemeColorForSystem(ThemeColorType color);
ThemeColorType GetDefaultThemeColor();
void RequestLibraryAppletGetForeground(LibraryAppletHandle handle);
void RequestExitChildLibraryAppletOfLibraryApplet(LibraryAppletHandle handle);
bool RequestExitChildLibraryAppletOfLibraryAppletOrTerminate(
  LibraryAppletHandle handle, TimeSpan timeout);

namespace detail {

[[gnu::visibility("hidden")]] bool g_IsCreatingSelfLibraryApplet;
[[gnu::visibility("hidden")]] ThemeColorType g_ExpectedThemeColorForSystem;
[[gnu::visibility("hidden")]] void (*g_OnAddLibraryApplet)(
  LibraryAppletHandle);
[[gnu::visibility("hidden")]] void (*g_OnRemoveLibraryApplet)(
  LibraryAppletHandle);
[[gnu::visibility("hidden")]] StartLibraryAppletHook g_StartLibraryAppletHook;

}

namespace {

using namespace detail;
using am::service::IAppletAccessor;
using am::service::ILibraryAppletAccessor;
using am::service::IStorage;

struct LibraryApplet {
  bool isUsed;
  bool isWaitingForForeground;
  uint64_t creationOrder;
  ILibraryAppletAccessor* accessor;
  AppletId appletId;
  LibraryAppletMode mode;
  os::SystemEventType stateChangedEvent;
  os::SystemEventType popOutDataEvent;
  bool isPopFromInteractiveOutChannelEventInitialized;
  os::SystemEventType popFromInteractiveOutChannelEvent;
  bool isStarted;
  bool isCreatedOnUnwinding;
  std::atomic<bool> isExitRequested;
  LibraryAppletExitReason exitReason;
  uint64_t indirectLayerConsumerHandle;
  bool isStreamPlayShareEnabled;
  bool isStreamPlayShareUnknownEnabled;
  uint8_t reserved[30];
};

static_assert(sizeof(LibraryApplet) == 0xe8);

const int LibraryAppletCountMax = 8;

// One second is the default timeout of the waiting exit request.
const TimeSpan DefaultExitTimeout = {-1000000000};

os::SdkMutex g_LibraryAppletMutex;
LibraryApplet g_LibraryApplets[LibraryAppletCountMax];

LibraryApplet* Get(LibraryAppletHandle handle) {
  return static_cast<LibraryApplet*>(handle._p);
}

bool IsResultNoData(Result result) {
  return result.GetInnerValueForDebug() == ((2 << 9) | 128);
}

template <typename T>
bool TryPopStorage(StorageHandle* pOutStorage, T* pObject,
  Result (T::*pop)(const sf::Out<sf::SharedPointer<IStorage>>&)) {
  sf::SharedPointer<IStorage> storage;
  const Result result =
    (pObject->*pop)(sf::Out<sf::SharedPointer<IStorage>>(&storage));
  if (result.IsSuccess()) {
    pOutStorage->_p = storage.Detach();
    return true;
  }
  const Result unexpected = IsResultNoData(result) ? Result{0} : result;
  storage.Reset();
  NN_ABORT_UNLESS_RESULT_SUCCESS(unexpected);
  return false;
}

template <typename T>
void PushStorage(T* pObject, Result (T::*push)(sf::SharedPointer<IStorage>),
  StorageHandle storage) {
  NN_ABORT_UNLESS_RESULT_SUCCESS((pObject->*push)(
    sf::SharedPointer<IStorage>(static_cast<IStorage*>(storage._p), true)));
  ReleaseStorage(storage);
}

}

void SetOnAddLibraryApplet(void (*callback)(LibraryAppletHandle)) {
  g_OnAddLibraryApplet = callback;
}

void SetOnRemoveLibraryApplet(void (*callback)(LibraryAppletHandle)) {
  g_OnRemoveLibraryApplet = callback;
}

void SetCreatingSelfLibraryApplet(bool isCreating) {
  g_IsCreatingSelfLibraryApplet = isCreating;
}

AppletId GetLibraryAppletId(LibraryAppletHandle handle) {
  return Get(handle)->appletId;
}

LibraryAppletMode GetLibraryAppletMode(LibraryAppletHandle handle) {
  return Get(handle)->mode;
}

void PresetLibraryAppletGpuTimeSliceZero(LibraryAppletHandle handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Get(handle)->accessor->PresetLibraryAppletGpuTimeSliceZero());
}

void SetStartLibraryAppletHook(StartLibraryAppletHook hook) {
  g_StartLibraryAppletHook = hook;
}

void RequestExitLibraryApplet(LibraryAppletHandle handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(Get(handle)->accessor->RequestExit());
}

bool RequestExitLibraryAppletAndWaitOrTerminate(LibraryAppletHandle handle,
  TimeSpan timeout) {
  return RequestExitLibraryAppletOrTerminate(Get(handle)->accessor, timeout);
}

void RequestExitLibraryAppletAndWait(LibraryAppletHandle handle) {
  RequestExitLibraryAppletOrTerminate(Get(handle)->accessor,
    DefaultExitTimeout);
}

LibraryAppletExitReason GetLibraryAppletExitReason(
  LibraryAppletHandle handle) {
  return Get(handle)->exitReason;
}

void PushToInChannel(LibraryAppletHandle handle, StorageHandle storage) {
  PushStorage(Get(handle)->accessor, &ILibraryAppletAccessor::PushInData,
    storage);
}

void PushToInteractiveInChannel(LibraryAppletHandle handle,
  StorageHandle storage) {
  PushStorage(Get(handle)->accessor,
    &ILibraryAppletAccessor::PushInteractiveInData, storage);
}

bool TryPopFromOutChannel(StorageHandle* pOutStorage,
  LibraryAppletHandle handle) {
  return TryPopStorage(pOutStorage, Get(handle)->accessor,
    &ILibraryAppletAccessor::PopOutData);
}

bool TryPopFromInteractiveOutChannel(StorageHandle* pOutStorage,
  LibraryAppletHandle handle) {
  return TryPopStorage(pOutStorage, Get(handle)->accessor,
    &ILibraryAppletAccessor::PopInteractiveOutData);
}

os::SystemEventType* GetPopFromInteractiveOutChannelEvent(
  LibraryAppletHandle handle) {
  std::lock_guard<os::SdkMutex> lock(g_LibraryAppletMutex);
  LibraryApplet* pApplet = Get(handle);
  if (!pApplet->isPopFromInteractiveOutChannelEventInitialized) {
    sf::NativeHandle eventHandle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      pApplet->accessor->GetPopInteractiveOutDataEvent(
        sf::Out<sf::NativeHandle>(&eventHandle)));
    os::AttachReadableHandleToSystemEvent(
      &pApplet->popFromInteractiveOutChannelEvent, eventHandle.GetOsHandle(),
      eventHandle.IsManaged(), os::EventClearMode_ManualClear);
    eventHandle.Detach();
    pApplet->isPopFromInteractiveOutChannelEventInitialized = true;
  }
  return &pApplet->popFromInteractiveOutChannelEvent;
}

uint64_t GetIndirectLayerConsumerHandle(LibraryAppletHandle handle) {
  return Get(handle)->indirectLayerConsumerHandle;
}

void SetOutOfFocusApplicationSuspendingEnabled(LibraryAppletHandle handle,
  bool isEnabled) {
  NN_ABORT_UNLESS(am::IsInitializedAsApplication());
  Get(handle)->accessor->SetOutOfFocusApplicationSuspendingEnabled(isEnabled);
}

bool GetDesirableKeyboardLayout(uint32_t* pOutLayout) {
  return am::GetLibraryAppletSelfAccessor()
    ->GetDesirableKeyboardLayout(sf::Out<uint32_t>(pOutLayout))
    .IsSuccess();
}

void SetExpectedThemeColorForSystem(ThemeColorType color) {
  g_ExpectedThemeColorForSystem = color;
}

uint32_t GetExpectedThemeColorForSystem() {
  return g_ExpectedThemeColorForSystem;
}

ThemeColorType GetDefaultThemeColor() {
  return ThemeColorType_Default;
}

void RequestLibraryAppletGetForeground(LibraryAppletHandle handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Get(handle)->accessor->RequestForAppletToGetForeground());
}

void RequestExitChildLibraryAppletOfLibraryApplet(LibraryAppletHandle handle) {
  sf::SharedPointer<IAppletAccessor> child;
  NN_ABORT_UNLESS_RESULT_SUCCESS(Get(handle)->accessor->GetChildAppletAccessor(
    sf::Out<sf::SharedPointer<IAppletAccessor>>(&child)));
  RequestExitLibraryAppletOrTerminate(child.Get(), DefaultExitTimeout);
}

bool RequestExitChildLibraryAppletOfLibraryAppletOrTerminate(
  LibraryAppletHandle handle, TimeSpan timeout) {
  sf::SharedPointer<IAppletAccessor> child;
  NN_ABORT_UNLESS_RESULT_SUCCESS(Get(handle)->accessor->GetChildAppletAccessor(
    sf::Out<sf::SharedPointer<IAppletAccessor>>(&child)));
  return RequestExitLibraryAppletOrTerminate(child.Get(), timeout);
}

os::SystemEventType* GetLibraryAppletExitEvent(LibraryAppletHandle handle) {
  return &Get(handle)->stateChangedEvent;
}

void SetStreamPlayShareEnabled(LibraryAppletHandle handle, bool isEnabled,
  bool isUnknownEnabled) {
  LibraryApplet* pApplet = Get(handle);
  pApplet->isStreamPlayShareEnabled = isEnabled;
  pApplet->isStreamPlayShareUnknownEnabled = isUnknownEnabled;
}

void CloseLibraryApplet(LibraryAppletHandle handle) {
  LibraryApplet* pApplet = Get(handle);
  if (*reinterpret_cast<const uint8_t*>(
      &pApplet->isPopFromInteractiveOutChannelEventInitialized) == 1) {
    os::DestroySystemEvent(&pApplet->popFromInteractiveOutChannelEvent);
  }
  os::DestroySystemEvent(&pApplet->stateChangedEvent);
  os::DestroySystemEvent(&pApplet->popOutDataEvent);
  pApplet->accessor->Release();
  pApplet->accessor = nullptr;
  std::lock_guard<os::SdkMutex> lock(g_LibraryAppletMutex);
  pApplet->isUsed = false;
}

}
