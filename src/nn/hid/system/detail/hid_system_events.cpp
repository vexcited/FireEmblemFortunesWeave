#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::hid::system::detail {

namespace {

constexpr Result ResultAudioControlInvalidCount = {0x191aca};
constexpr Result ResultAudioControlNullOutput = {0x191cca};

template <typename Acquire>
Result BindSystemEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode, Acquire acquire) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  sf::NativeHandle handle;
  NN_RESULT_DO(acquire(proxy, &handle));

  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), clearMode);
  handle.Detach();
  return {};
}

template <typename Acquire>
Result BindSystemEventUnchecked(os::SystemEventType* pEvent,
  os::EventClearMode clearMode, Acquire acquire) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  sf::NativeHandle handle;
  NN_RESULT_DO(acquire(proxy, &handle));

  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), clearMode);
  handle.Detach();
  return {};
}

}

Result BindHomeButtonEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  return BindSystemEvent(pEvent, clearMode,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireHomeButtonEventHandle(pOut, {});
    });
}

Result BindCaptureButtonEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  return BindSystemEvent(pEvent, clearMode,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireCaptureButtonEventHandle(pOut, {});
    });
}

Result BindCButtonEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  return BindSystemEvent(pEvent, clearMode,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireCButtonEventHandle(pOut, {});
    });
}

Result BindAudioControlStateChangeEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  return BindSystemEvent(pEvent, clearMode,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireAudioControlEventHandle(pOut);
    });
}

Result GetAudioControlStates(int* pOutCount, AudioControlState* pOutStates,
  int count) {
  if (pOutStates == nullptr) {
    return ResultAudioControlNullOutput;
  }

  if (count < 0) {
    return ResultAudioControlInvalidCount;
  }

  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  int64_t outCount;
  NN_RESULT_DO(proxy->GetAudioControlStates(&outCount,
    sf::OutArray<AudioControlState>(pOutStates, count)));
  *pOutCount = outCount;
  return {};
}

Result BindAwakeRequestEvent(os::SystemEvent* pEvent,
  os::EventClearMode clearMode) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  sf::NativeHandle handle;
  NN_RESULT_DO(proxy->AcquireAwakeRequestEventHandle(&handle, {}));

  pEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    clearMode);
  handle.Detach();
  return {};
}

void SetHandheldAsFullKeyEmulation(bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    proxy->SetHandheldAsFullKeyEmulation(isEnabled));
}

void GetFullKeyEmulationRecommendedChangedEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    proxy->AcquireFullKeyEmulationRecommendedChangedEventHandle(&handle));
  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), clearMode);
  handle.Detach();
}

bool IsFullKeyEmulationRecommended() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  bool isRecommended = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    proxy->IsFullKeyEmulationRecommended(&isRecommended));
  return isRecommended;
}

bool IsFullKeyEmulationTarget(NpadIdType id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  bool isTarget = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    proxy->IsFullKeyEmulationTarget(&isTarget, id));
  return isTarget;
}

Result GetJcmsUsedFlag(bool* pOutValue, NpadIdType id, JcmsType type) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetJcmsUsedFlag(pOutValue, utility::MakeJcmsHandle(id, type),
    utility::GetAppletResourceUserId());
}

Result ClearJcmsUsedFlag(NpadIdType id, JcmsType type) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->ClearJcmsUsedFlag(utility::MakeJcmsHandle(id, type),
    utility::GetAppletResourceUserId());
}

Result SetNmouseMovementAdjustmentParameters(
  const NmouseMovementAdjustmentParameter* pParameters, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SetNmouseMovementAdjustmentParameters(
    sf::InArray<NmouseMovementAdjustmentParameter>(pParameters, count),
    utility::GetAppletResourceUserId());
}

Result GetNmouseMovementAdjustmentParameters(int* pOutCount,
  NmouseMovementAdjustmentParameter* pOutParameters, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  int64_t outCount;
  NN_RESULT_DO(proxy->GetNmouseMovementAdjustmentParameters(&outCount,
    sf::OutArray<NmouseMovementAdjustmentParameter>(pOutParameters, count),
    utility::GetAppletResourceUserId()));
  *pOutCount = outCount;
  return {};
}

Result GetOverlayNmousePointerRanges(int* pOutWidth, int* pOutHeight) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  *pOutWidth = 0;
  *pOutHeight = 0;
  return {};
}

Result BindNfcDeviceUpdateEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  return BindSystemEventUnchecked(pEvent, clearMode,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireNfcDeviceUpdateEventHandle(pOut);
    });
}

Result GetNpadsWithNfc(int* pOutCount, NpadIdType* pOutIds, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  int64_t outCount;
  NN_RESULT_DO(proxy->GetNpadsWithNfc(&outCount,
    sf::OutArray<NpadIdType>(pOutIds, count)));
  *pOutCount = outCount;
  return {};
}

Result SetNfcEvent(os::SystemEventType* pActivateEvent,
  os::SystemEventType* pDeactivateEvent, AbstractedPadId id) {
  sf::NativeHandle deactivateHandle;
  sf::NativeHandle activateHandle;
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  NN_RESULT_DO(proxy->AcquireNfcActivateEventHandle(&activateHandle,
    &deactivateHandle, id));

  os::AttachReadableHandleToSystemEvent(pActivateEvent,
    activateHandle.GetOsHandle(), activateHandle.IsManaged(),
    os::EventClearMode_ManualClear);
  os::AttachReadableHandleToSystemEvent(pDeactivateEvent,
    deactivateHandle.GetOsHandle(), deactivateHandle.IsManaged(),
    os::EventClearMode_ManualClear);
  activateHandle.Detach();
  deactivateHandle.Detach();
  return {};
}

}
