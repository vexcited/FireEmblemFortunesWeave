#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::hid::system::detail {

namespace {

constexpr Result ResultUniquePadNullOutput = {0x714ca};
constexpr Result ResultUniquePadInvalidCount = {0x716ca};

template <typename Acquire>
Result BindSystemEvent(os::SystemEventType* pEvent,
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

template <typename Acquire>
Result GetSystemEventType(os::SystemEventType* pEvent, Acquire acquire) {
  sf::SharedPointer<IHidSystemServer> proxy;
  Result result = server::CreateHidSystemServerProxy(&proxy);
  if (result.IsSuccess()) {
    sf::NativeHandle handle;
    result = acquire(proxy, &handle);
    if (pEvent != nullptr && result.IsSuccess()) {
      os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
        handle.IsManaged(), os::EventClearMode_ManualClear);
      handle.Detach();
    }
  }

  return result;
}

template <typename Acquire>
Result BindSystemEventObject(os::SystemEvent* pEvent, Acquire acquire) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  sf::NativeHandle handle;
  NN_RESULT_DO(acquire(proxy, &handle));

  os::AttachReadableHandleToSystemEvent(pEvent->GetBase(),
    handle.GetOsHandle(), handle.IsManaged(), os::EventClearMode_AutoClear);
  handle.Detach();
  return {};
}

}

Result BindUniquePadConnectionEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  return BindSystemEvent(pEvent, clearMode,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireUniquePadConnectionEventHandle(pOut);
    });
}

Result BindUniquePadConnectionEventOnHandheldForNs(
  os::SystemEventType* pEvent, os::EventClearMode clearMode) {
  return BindSystemEvent(pEvent, clearMode,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireUniquePadConnectionEventHandleOnHandheldForNs(pOut);
    });
}

Result ListUniquePads(int* pOutCount, UniquePadId* pOutIds, int count) {
  if (pOutCount == nullptr) {
    return ResultUniquePadNullOutput;
  }

  if (count < 0) {
    return ResultUniquePadInvalidCount;
  }

  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  int64_t outCount;
  NN_RESULT_DO(proxy->GetUniquePadIds(&outCount,
    sf::OutArray<UniquePadId>(pOutIds, count)));
  *pOutCount = outCount;
  return {};
}

Result ListOunceJoyConGripUniquePads(int* pOutCount, UniquePadId* pOutIds,
  int count) {
  if (pOutCount == nullptr) {
    return ResultUniquePadNullOutput;
  }

  if (count < 0) {
    return ResultUniquePadInvalidCount;
  }

  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  int64_t outCount;
  NN_RESULT_DO(proxy->ListOunceJoyConGripUniquePads(&outCount,
    sf::OutArray<UniquePadId>(pOutIds, count)));
  *pOutCount = outCount;
  return {};
}

Result GetOunceJoyConUniquePadIdsFromGripId(int* pOutCount,
  UniquePadId* pOutIds, int count, UniquePadId gripId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  int64_t outCount;
  NN_RESULT_DO(proxy->GetOunceJoyConUniquePadIdsFromGripId(&outCount,
    sf::OutArray<UniquePadId>(pOutIds, count), gripId));
  *pOutCount = outCount;
  return {};
}

Result ListSixAxisSensorHandles(int* pOutCount,
  UniqueSixAxisSensorHandle* pOutHandles, UniquePadId id, int count) {
  if (count < 0) {
    return ResultUniquePadInvalidCount;
  }

  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  int64_t outCount;
  NN_RESULT_DO(proxy->ListSixAxisSensorHandles(&outCount,
    sf::OutArray<UniqueSixAxisSensorHandle>(pOutHandles, count), id));
  *pOutCount = outCount;
  return {};
}

Result GetSixAxisSensorUserCalibrationStage(
  SixAxisSensorUserCalibrationStage* pOutStage,
  UniqueSixAxisSensorHandle handle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  int64_t stage = 0;
  Result result = proxy->GetSixAxisSensorUserCalibrationStage(&stage, handle);
  pOutStage->value = stage;
  return result;
}

Result BindUniquePadButtonStateChangedEvent(os::SystemEvent* pEvent,
  os::EventClearMode clearMode) {
  sf::NativeHandle handle;
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  NN_RESULT_DO(proxy->AcquireUniquePadButtonStateChangedEventHandle(&handle,
    utility::GetAppletResourceUserId()));

  pEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    clearMode);
  handle.Detach();
  return {};
}

Result SetTouchScreenDefaultConfiguration(
  const TouchScreenConfigurationForNx& configuration) {
  TouchScreenConfigurationForNx value = {};
  value.mode = configuration.mode;

  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SetTouchScreenDefaultConfiguration(value);
}

Result BindTouchScreenAutoTuneForSystemSettingsCompletedEvent(
  os::SystemEvent* pEvent) {
  return BindSystemEventObject(pEvent,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireTouchScreenAutoTuneForSystemSettingsCompletedEvent(
        pOut);
    });
}

Result IsTouchScreenAutoTuneRequiredForRepairProviderReplacement(
  bool* pOutValue) {
  *pOutValue = false;

  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  bool value;
  NN_RESULT_DO(
    proxy->IsTouchScreenAutoTuneRequiredForRepairProviderReplacement(&value));
  *pOutValue = value;
  return {};
}

Result GetDetectedEsdSystemEventType(os::SystemEventType* pEvent) {
  return GetSystemEventType(pEvent,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireDetectedEsdEventHandle(pOut);
    });
}

Result GetFetchedDisplayStatusReportSystemEventType(
  os::SystemEventType* pEvent) {
  return GetSystemEventType(pEvent,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireFetchedDisplayStatusReportEventHandle(pOut);
    });
}

void WakeTouchScreenUpAsync() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_ABORT_UNLESS_RESULT_SUCCESS(server::CreateHidSystemServerProxy(&proxy));
  NN_ABORT_UNLESS_RESULT_SUCCESS(proxy->WakeTouchScreenUpAsync());
}

void PutTouchScreenToSleep() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_ABORT_UNLESS_RESULT_SUCCESS(server::CreateHidSystemServerProxy(&proxy));
  NN_ABORT_UNLESS_RESULT_SUCCESS(proxy->PutTouchScreenToSleep());
}

Result BindTouchScreenAsyncWakeCompletedEvent(os::SystemEvent* pEvent,
  applet::AppletResourceUserId aruid) {
  return BindSystemEventObject(pEvent,
    [aruid](sf::SharedPointer<IHidSystemServer>& proxy,
      sf::NativeHandle* pOut) {
      return proxy->AcquireTouchScreenAsyncWakeCompletedEvent(pOut, aruid);
    });
}

void SetSuppressedTouchStateMode(bool isSuppressed) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_ABORT_UNLESS_RESULT_SUCCESS(server::CreateHidSystemServerProxy(&proxy));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    proxy->SetSuppressedTouchStateMode(isSuppressed));
}

}
