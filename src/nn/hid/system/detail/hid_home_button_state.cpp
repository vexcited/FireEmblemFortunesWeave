#include <algorithm>
#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::system::detail {

namespace {

constexpr Result ResultHomeButtonNotInitialized = {0x16aca};
constexpr Result ResultHomeButtonActivationUpperLimitOver = {0x16cca};
constexpr Result ResultHomeButtonDeactivationLowerLimitOver = {0x16eca};
constexpr Result ResultHomeButtonNullStateBuffer = {0x170ca};
constexpr Result ResultHomeButtonInvalidStateCount = {0x172ca};

constexpr int HomeButtonLifoCapacity = 17;
constexpr size_t HomeButtonLifoOffset = 0x4c00;

using HomeButtonLifo =
  hid::detail::RingLifo<HomeButtonState, HomeButtonLifoCapacity>;

class HomeButtonSharedMemoryAccessor final
    : public hid::detail::LifoSharedMemoryAccessor<
        HomeButtonSharedMemoryAccessor, HomeButtonLifo, HomeButtonLifoOffset> {
 public:
  HomeButtonSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(ResultHomeButtonActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultHomeButtonDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidSystemServer> proxy;
    NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
    return proxy->ActivateHomeButton();
  }

  static Result DeactivateServer() {
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    return proxy->DeactivateHomeButton();
  }
};

HomeButtonSharedMemoryAccessor& GetHomeButtonSharedMemoryAccessor() {
  return utility::StaticObject<HomeButtonSharedMemoryAccessor>::Get();
}

}

Result InitializeHomeButton() {
  HomeButtonSharedMemoryAccessor& accessor =
    GetHomeButtonSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(applet::AppletResourceUserId{}));
  return accessor.Activate();
}

Result FinalizeHomeButton() {
  return GetHomeButtonSharedMemoryAccessor().Deactivate();
}

Result GetHomeButtonStates(
  int* pOutCount, HomeButtonState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultHomeButtonNullStateBuffer;
  }
  if (count < 0) {
    return ResultHomeButtonInvalidStateCount;
  }
  const HomeButtonLifo* pLifo = GetHomeButtonSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultHomeButtonNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}
