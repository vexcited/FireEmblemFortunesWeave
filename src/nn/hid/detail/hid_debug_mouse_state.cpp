#include <algorithm>
#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultDebugMouseNotInitialized = {0x27daca};
constexpr Result ResultDebugMouseActivationUpperLimitOver = {0x27dcca};
constexpr Result ResultDebugMouseDeactivationLowerLimitOver = {0x27deca};
constexpr Result ResultDebugMouseNullStateBuffer = {0x27e0ca};
constexpr Result ResultDebugMouseInvalidStateCount = {0x27e2ca};

constexpr int DebugMouseLifoCapacity = 17;
constexpr size_t DebugMouseLifoOffset = 0x3dc00;

using DebugMouseLifo = RingLifo<MouseState, DebugMouseLifoCapacity>;

class DebugMouseSharedMemoryAccessor final
    : public LifoSharedMemoryAccessor<DebugMouseSharedMemoryAccessor,
        DebugMouseLifo, DebugMouseLifoOffset> {
 public:
  DebugMouseSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(ResultDebugMouseActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultDebugMouseDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidServer> proxy;
    NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
    return proxy->ActivateDebugMouse(utility::GetAppletResourceUserId());
  }

  static Result DeactivateServer() {
    return Result{};
  }
};

DebugMouseSharedMemoryAccessor& GetDebugMouseSharedMemoryAccessor() {
  return utility::StaticObject<DebugMouseSharedMemoryAccessor>::Get();
}

}

Result InitializeDebugMouse() {
  DebugMouseSharedMemoryAccessor& accessor =
    GetDebugMouseSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  return accessor.Activate();
}

Result FinalizeDebugMouse() {
  DebugMouseSharedMemoryAccessor& accessor =
    GetDebugMouseSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  return accessor.Deactivate();
}

Result GetDebugMouseState(MouseState* pOutState) {
  if (pOutState == nullptr) {
    return ResultDebugMouseNullStateBuffer;
  }
  const DebugMouseLifo* pLifo = GetDebugMouseSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultDebugMouseNotInitialized;
  }
  pLifo->Read(pOutState, 1);
  return Result{};
}

Result GetDebugMouseStates(int* pOutCount, MouseState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultDebugMouseNullStateBuffer;
  }
  if (count < 0) {
    return ResultDebugMouseInvalidStateCount;
  }
  const DebugMouseLifo* pLifo = GetDebugMouseSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultDebugMouseNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}
