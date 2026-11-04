#include <algorithm>
#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::system::detail {

namespace {

constexpr Result ResultCButtonNotInitialized = {0x282aca};
constexpr Result ResultCButtonActivationUpperLimitOver = {0x282cca};
constexpr Result ResultCButtonDeactivationLowerLimitOver = {0x282eca};
constexpr Result ResultCButtonNullStateBuffer = {0x2830ca};
constexpr Result ResultCButtonInvalidStateCount = {0x2832ca};

constexpr int CButtonLifoCapacity = 17;
constexpr size_t CButtonLifoOffset = 0x3e000;

using CButtonLifo = hid::detail::RingLifo<CButtonState, CButtonLifoCapacity>;

class CButtonSharedMemoryAccessor final
    : public hid::detail::LifoSharedMemoryAccessor<CButtonSharedMemoryAccessor,
        CButtonLifo, CButtonLifoOffset> {
 public:
  CButtonSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(ResultCButtonActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultCButtonDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidSystemServer> proxy;
    NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
    return proxy->ActivateCButton();
  }

  static Result DeactivateServer() {
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    return proxy->DeactivateCButton();
  }
};

CButtonSharedMemoryAccessor& GetCButtonSharedMemoryAccessor() {
  return utility::StaticObject<CButtonSharedMemoryAccessor>::Get();
}

}

Result InitializeCButton() {
  CButtonSharedMemoryAccessor& accessor = GetCButtonSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(applet::AppletResourceUserId{}));
  return accessor.Activate();
}

Result FinalizeCButton() {
  return GetCButtonSharedMemoryAccessor().Deactivate();
}

Result GetCButtonStates(int* pOutCount, CButtonState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultCButtonNullStateBuffer;
  }
  if (count < 0) {
    return ResultCButtonInvalidStateCount;
  }
  const CButtonLifo* pLifo = GetCButtonSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultCButtonNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}
