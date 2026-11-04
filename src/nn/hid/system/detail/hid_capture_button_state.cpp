#include <algorithm>
#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::system::detail {

namespace {

constexpr Result ResultCaptureButtonNotInitialized = {0x372ca};
constexpr Result ResultCaptureButtonActivationUpperLimitOver = {0x374ca};
constexpr Result ResultCaptureButtonDeactivationLowerLimitOver = {0x376ca};
constexpr Result ResultCaptureButtonNullStateBuffer = {0x378ca};
constexpr Result ResultCaptureButtonInvalidStateCount = {0x37aca};

constexpr int CaptureButtonLifoCapacity = 17;
constexpr size_t CaptureButtonLifoOffset = 0x5000;

using CaptureButtonLifo =
  hid::detail::RingLifo<CaptureButtonState, CaptureButtonLifoCapacity>;

class CaptureButtonSharedMemoryAccessor final
    : public hid::detail::LifoSharedMemoryAccessor<
        CaptureButtonSharedMemoryAccessor, CaptureButtonLifo,
        CaptureButtonLifoOffset> {
 public:
  CaptureButtonSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(
      ResultCaptureButtonActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultCaptureButtonDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidSystemServer> proxy;
    NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
    return proxy->ActivateCaptureButton();
  }

  static Result DeactivateServer() {
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    return proxy->DeactivateCaptureButton();
  }
};

CaptureButtonSharedMemoryAccessor& GetCaptureButtonSharedMemoryAccessor() {
  return utility::StaticObject<CaptureButtonSharedMemoryAccessor>::Get();
}

}

Result InitializeCaptureButton() {
  CaptureButtonSharedMemoryAccessor& accessor =
    GetCaptureButtonSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(applet::AppletResourceUserId{}));
  return accessor.Activate();
}

Result FinalizeCaptureButton() {
  return GetCaptureButtonSharedMemoryAccessor().Deactivate();
}

Result GetCaptureButtonStates(
  int* pOutCount, CaptureButtonState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultCaptureButtonNullStateBuffer;
  }
  if (count < 0) {
    return ResultCaptureButtonInvalidStateCount;
  }
  const CaptureButtonLifo* pLifo =
    GetCaptureButtonSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultCaptureButtonNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}
