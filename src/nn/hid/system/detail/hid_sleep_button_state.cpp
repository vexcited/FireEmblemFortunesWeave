#include <algorithm>
#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::system::detail {

namespace {

constexpr Result ResultSleepButtonNotInitialized = {0x322ca};
constexpr Result ResultSleepButtonActivationUpperLimitOver = {0x324ca};
constexpr Result ResultSleepButtonDeactivationLowerLimitOver = {0x326ca};
constexpr Result ResultSleepButtonNullStateBuffer = {0x328ca};
constexpr Result ResultSleepButtonInvalidStateCount = {0x32aca};

constexpr int SleepButtonLifoCapacity = 17;
constexpr size_t SleepButtonLifoOffset = 0x4e00;

using SleepButtonLifo =
  hid::detail::RingLifo<SleepButtonState, SleepButtonLifoCapacity>;

class SleepButtonSharedMemoryAccessor final
    : public hid::detail::LifoSharedMemoryAccessor<
        SleepButtonSharedMemoryAccessor, SleepButtonLifo,
        SleepButtonLifoOffset> {
 public:
  SleepButtonSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(
      ResultSleepButtonActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultSleepButtonDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidSystemServer> proxy;
    NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
    return proxy->ActivateSleepButton();
  }

  static Result DeactivateServer() {
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    return proxy->DeactivateSleepButton();
  }
};

SleepButtonSharedMemoryAccessor& GetSleepButtonSharedMemoryAccessor() {
  return utility::StaticObject<SleepButtonSharedMemoryAccessor>::Get();
}

}

Result InitializeSleepButton() {
  SleepButtonSharedMemoryAccessor& accessor =
    GetSleepButtonSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(applet::AppletResourceUserId{}));
  return accessor.Activate();
}

Result FinalizeSleepButton() {
  return GetSleepButtonSharedMemoryAccessor().Deactivate();
}

Result GetSleepButtonStates(
  int* pOutCount, SleepButtonState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultSleepButtonNullStateBuffer;
  }
  if (count < 0) {
    return ResultSleepButtonInvalidStateCount;
  }
  const SleepButtonLifo* pLifo = GetSleepButtonSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultSleepButtonNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}
