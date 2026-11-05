#include <algorithm>
#include <new>

#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/detail/hid_utility.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultMouseNotInitialized = {0x7aca};
constexpr Result ResultMouseActivationUpperLimitOver = {0x7cca};
constexpr Result ResultMouseDeactivationLowerLimitOver = {0x7eca};
constexpr Result ResultMouseNullStateBuffer = {0x80ca};
constexpr Result ResultMouseInvalidStateCount = {0x82ca};

constexpr int MouseLifoCapacity = 17;
constexpr size_t MouseLifoOffset = 0x3400;

using MouseLifo = RingLifo<MouseState, MouseLifoCapacity>;

class MouseSharedMemoryAccessor final
    : public LifoSharedMemoryAccessor<MouseSharedMemoryAccessor, MouseLifo,
        MouseLifoOffset> {
 public:
  MouseSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(ResultMouseActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(ResultMouseDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidServer> proxy;
    NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
    return proxy->ActivateMouse(utility::GetAppletResourceUserId());
  }

  static Result DeactivateServer() {
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    return proxy->DeactivateMouse();
  }
};

MouseSharedMemoryAccessor& GetMouseSharedMemoryAccessor() {
  return utility::StaticObject<MouseSharedMemoryAccessor>::Get();
}

}

Result InitializeMouse() {
  MouseSharedMemoryAccessor& accessor = GetMouseSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  NN_RESULT_DO(accessor.Activate());
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableMouse(utility::GetAppletResourceUserId(), true);
}

Result FinalizeMouse() {
  return GetMouseSharedMemoryAccessor().Deactivate();
}

Result GetMouseState(MouseState* pOutState) {
  if (pOutState == nullptr) {
    return ResultMouseNullStateBuffer;
  }
  const MouseLifo* pLifo = GetMouseSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultMouseNotInitialized;
  }
  pLifo->Read(pOutState, 1);
  return Result{};
}

Result GetMouseStates(int* pOutCount, MouseState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultMouseNullStateBuffer;
  }
  if (count < 0) {
    return ResultMouseInvalidStateCount;
  }
  const MouseLifo* pLifo = GetMouseSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultMouseNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}

namespace nn::hid::detail {

Result InitializeDebugMouse();
Result FinalizeDebugMouse();
Result GetDebugMouseState(MouseState* pOutState);
Result GetDebugMouseStates(int* pOutCount, MouseState* pOutStates, int count);

namespace {

enum MouseType {
  MouseType_Mouse,
  MouseType_DebugMouse,
};

}

MouseHandle GetMouseHandle() {
  return utility::GetMouseHandle(
    static_cast<utility::MouseTypeIdx>(MouseType_Mouse));
}

MouseHandle GetDebugMouseHandle() {
  return utility::GetMouseHandle(
    static_cast<utility::MouseTypeIdx>(MouseType_DebugMouse));
}

Result InitializeMouse(const MouseHandle& handle) {
  switch (utility::GetMouseHandleTypeIdx(handle)) {
    case MouseType_Mouse:
      NN_RESULT_DO(InitializeMouse());
      break;
    case MouseType_DebugMouse:
      NN_RESULT_DO(InitializeDebugMouse());
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  return Result{};
}

Result FinalizeMouse(const MouseHandle& handle) {
  switch (utility::GetMouseHandleTypeIdx(handle)) {
    case MouseType_Mouse:
      NN_RESULT_DO(GetMouseSharedMemoryAccessor().Deactivate());
      break;
    case MouseType_DebugMouse:
      NN_RESULT_DO(FinalizeDebugMouse());
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  return Result{};
}

Result GetMouseState(MouseState* pOutState, const MouseHandle& handle) {
  if (pOutState == nullptr) {
    return ResultMouseNullStateBuffer;
  }
  switch (utility::GetMouseHandleTypeIdx(handle)) {
    case MouseType_Mouse:
      NN_RESULT_DO(GetMouseState(pOutState));
      break;
    case MouseType_DebugMouse:
      NN_RESULT_DO(GetDebugMouseState(pOutState));
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  return Result{};
}

Result GetMouseStates(int* pOutCount, MouseState* pOutStates, int count,
  const MouseHandle& handle) {
  if (pOutStates == nullptr) {
    return ResultMouseNullStateBuffer;
  }
  if (count < 0) {
    return ResultMouseInvalidStateCount;
  }
  switch (utility::GetMouseHandleTypeIdx(handle)) {
    case MouseType_Mouse:
      NN_RESULT_DO(GetMouseStates(pOutCount, pOutStates, count));
      break;
    case MouseType_DebugMouse:
      NN_RESULT_DO(GetDebugMouseStates(pOutCount, pOutStates, count));
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  return Result{};
}

}
