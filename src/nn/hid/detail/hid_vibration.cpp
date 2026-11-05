#include <atomic>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/hid_vibration_node.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::hid::detail {

Result SendVibrationValues(const VibrationDeviceHandle* pHandles,
  const VibrationValue* pValues, int count);

namespace {

constexpr int VibrationValueVersion = 2;
constexpr int VibrationQueueCountMax = 12;

// The flag is tested by its low bit, so it is kept as a byte.
uint8_t g_IsVibrationNxCompatibleModeEnabled;

struct VibrationQueue {
  int count;
  VibrationDeviceHandle handles[VibrationQueueCountMax];
  VibrationValue values[VibrationQueueCountMax];
};

VibrationQueue g_VibrationQueue;

[[gnu::noinline]] sf::SharedPointer<IHidServer>& GetHidServer() {
  static sf::SharedPointer<IHidServer> s_Proxy;
  static std::atomic<bool> s_IsInitialized;
  static os::SdkMutexType s_Mutex;
  if (!s_IsInitialized.load(std::memory_order_acquire)) {
    s_Mutex.Lock();
    if (!s_IsInitialized.load(std::memory_order_relaxed)) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(server::CreateHidServerProxy(&s_Proxy));
      s_IsInitialized.store(true, std::memory_order_release);
    }
    s_Mutex.Unlock();
  }
  return s_Proxy;
}

}

Result PermitVibration(bool isPermitted) {
  return GetHidServer()->PermitVibration(isPermitted);
}

Result IsVibrationPermitted(bool* pOutValue) {
  return GetHidServer()->IsVibrationPermitted(pOutValue);
}

Result BeginPermitVibrationSession() {
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  return proxy->BeginPermitVibrationSession(
    utility::GetAppletResourceUserId());
}

Result EndPermitVibrationSession() {
  return GetHidServer()->EndPermitVibrationSession();
}

Result InitializeVibrationDevice(const VibrationDeviceHandle& handle) {
  static sf::SharedPointer<IActiveVibrationDeviceList> s_DeviceList;
  static std::atomic<bool> s_IsDeviceListCreated;
  static os::SdkMutexType s_DeviceListMutex;
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  if (!s_IsDeviceListCreated.load(std::memory_order_acquire)) {
    s_DeviceListMutex.Lock();
    if (!s_IsDeviceListCreated.load(std::memory_order_relaxed)) {
      const Result result = proxy->CreateActiveVibrationDeviceList(
        sf::Out<sf::SharedPointer<IActiveVibrationDeviceList>>(
          &s_DeviceList));
      if (result.IsFailure()) {
        s_DeviceListMutex.Unlock();
        return result;
      }
      s_IsDeviceListCreated.store(true, std::memory_order_release);
    }
    s_DeviceListMutex.Unlock();
  }
  return s_DeviceList->ActivateVibrationDevice(handle);
}

Result GetVibrationDeviceInfo(VibrationDeviceInfo* pOutInfo,
  const VibrationDeviceHandle& handle) {
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  VibrationDeviceInfo info;
  NN_RESULT_DO(proxy->GetVibrationDeviceInfo(&info, handle));
  *pOutInfo = info;
  return Result{};
}

Result SendVibrationValue(const VibrationDeviceHandle& handle,
  const VibrationValue& value) {
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  if ((g_IsVibrationNxCompatibleModeEnabled & 1) != 0) {
    NN_RESULT_DO(proxy->SendVibrationValue(utility::GetAppletResourceUserId(),
      handle, value));
  }
  else {
    NN_RESULT_DO(proxy->SendVibrationValueWithVersion(
      utility::GetAppletResourceUserId(), handle, value,
      VibrationValueVersion));
  }
  return Result{};
}

Result SendVibrationValues(const VibrationDeviceHandle* pHandles,
  const VibrationValue* pValues, int count) {
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  if ((g_IsVibrationNxCompatibleModeEnabled & 1) != 0) {
    NN_RESULT_DO(proxy->SendVibrationValues(
      utility::GetAppletResourceUserId(),
      sf::InArray<VibrationDeviceHandle>(pHandles, count),
      sf::InArray<VibrationValue>(pValues, count)));
  }
  else {
    NN_RESULT_DO(proxy->SendVibrationValuesWithVersion(
      utility::GetAppletResourceUserId(),
      sf::InArray<VibrationDeviceHandle>(pHandles, count),
      sf::InArray<VibrationValue>(pValues, count), VibrationValueVersion));
  }
  return Result{};
}

Result GetActualVibrationValue(VibrationValue* pOutValue,
  const VibrationDeviceHandle& handle) {
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  return proxy->GetActualVibrationValue(pOutValue,
    utility::GetAppletResourceUserId(), handle);
}

Result SendVibrationGcErmCommand(const VibrationDeviceHandle& handle,
  const VibrationGcErmCommand& command) {
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  return proxy->SendVibrationGcErmCommand(utility::GetAppletResourceUserId(),
    handle, command);
}

Result GetActualVibrationGcErmCommand(VibrationGcErmCommand* pOutCommand,
  const VibrationDeviceHandle& handle) {
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  return proxy->GetActualVibrationGcErmCommand(pOutCommand,
    utility::GetAppletResourceUserId(), handle);
}

Result IsVibrationDeviceMounted(bool* pOutValue,
  const VibrationDeviceHandle& handle) {
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  return proxy->IsVibrationDeviceMounted(pOutValue,
    utility::GetAppletResourceUserId(), handle);
}

Result IsOunceVibrationDeviceMounted(bool* pOutValue,
  const VibrationDeviceHandle& handle) {
  sf::SharedPointer<IHidServer>& proxy = GetHidServer();
  return proxy->IsOunceVibrationDeviceMounted(pOutValue,
    utility::GetAppletResourceUserId(), handle);
}

Result SetVibrationNxCompatibleMode(bool isEnabled) {
  g_IsVibrationNxCompatibleModeEnabled = isEnabled;
  return Result{};
}

Result IsVibrationNxCompatibleModeEnabled(bool* pOutValue) {
  *pOutValue = static_cast<bool>(g_IsVibrationNxCompatibleModeEnabled);
  return Result{};
}

Result EnqueueVibrationValue(const VibrationDeviceHandle& handle,
  const VibrationValue& value) {
  int count = g_VibrationQueue.count;
  if (count >= VibrationQueueCountMax) {
    NN_RESULT_DO(SendVibrationValues(g_VibrationQueue.handles,
      g_VibrationQueue.values, count));
    count = 0;
  }
  g_VibrationQueue.handles[count] = handle;
  g_VibrationQueue.values[count] = value;
  g_VibrationQueue.count = count + 1;
  return Result{};
}

Result FlushEnqueuedVibrationValues() {
  if (g_VibrationQueue.count > 0) {
    NN_RESULT_DO(SendVibrationValues(g_VibrationQueue.handles,
      g_VibrationQueue.values, g_VibrationQueue.count));
    g_VibrationQueue.count = 0;
  }
  return Result{};
}

}
