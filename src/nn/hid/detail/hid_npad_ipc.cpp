#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/os/system_event.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultXpadNullIdBuffer = {0x1a6ca};
constexpr Result ResultXpadInvalidIdCount = {0x1aaca};

}

Result GetXpadIds(int* pOutCount, BasicXpadId* pOutXpadIds, int count) {
  if (pOutCount == nullptr) {
    return ResultXpadNullIdBuffer;
  }
  if (count < 0) {
    return ResultXpadInvalidIdCount;
  }
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  int64_t outCount = 0;
  NN_RESULT_DO(proxy->GetXpadIds(&outCount,
    sf::OutArray<BasicXpadId>(pOutXpadIds, count)));
  *pOutCount = static_cast<int>(outCount);
  return Result{};
}

Result SetSupportedNpadIdType(const NpadIdType* pIds, int count) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetSupportedNpadIdType(utility::GetAppletResourceUserId(),
    sf::InArray<NpadIdType>(pIds, count));
}

Result GetNpadHandheldActivationMode(
  NpadHandheldActivationMode* pOutValue) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  int64_t value = 0;
  NN_RESULT_DO(proxy->GetNpadHandheldActivationMode(
    utility::GetAppletResourceUserId(), &value));
  switch (value) {
    case NpadHandheldActivationMode_Dual:
    case NpadHandheldActivationMode_Single:
    case NpadHandheldActivationMode_None:
      *pOutValue = static_cast<NpadHandheldActivationMode>(value);
      return Result{};
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result GetNpadCommunicationMode(NpadCommunicationMode* pOutValue) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  int64_t value = 0;
  NN_RESULT_DO(proxy->GetNpadCommunicationMode(&value));
  switch (value) {
    case NpadCommunicationMode_5ms:
    case NpadCommunicationMode_10ms:
    case NpadCommunicationMode_15ms:
    case NpadCommunicationMode_Default:
      *pOutValue = static_cast<NpadCommunicationMode>(value);
      return Result{};
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result BindNpadStyleSetUpdateEvent(const NpadIdType& id,
  os::SystemEventType* pEvent, os::EventClearMode clearMode) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  sf::NativeHandle handle;
  NN_RESULT_DO(proxy->AcquireNpadStyleSetUpdateEventHandle(
    utility::GetAppletResourceUserId(), &handle, id,
    reinterpret_cast<uint64_t>(pEvent)));
  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), clearMode);
  handle.Detach();
  return Result{};
}

Result GetNpadOfHighestBatteryLevel(NpadIdType* pOutId,
  const NpadIdType* pIds, int count) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->GetNpadOfHighestBatteryLevel(pOutId,
    sf::InArray<NpadIdType>(pIds, count), utility::GetAppletResourceUserId());
}

}
