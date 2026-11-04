#include <algorithm>
#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultDebugPadNotInitialized = {0x2aca};
constexpr Result ResultDebugPadActivationUpperLimitOver = {0x2cca};
constexpr Result ResultDebugPadDeactivationLowerLimitOver = {0x2eca};
constexpr Result ResultDebugPadNullStateBuffer = {0x30ca};
constexpr Result ResultDebugPadInvalidStateCount = {0x32ca};

constexpr int DebugPadLifoCapacity = 17;
constexpr size_t DebugPadLifoOffset = 0;

using DebugPadLifo = RingLifo<DebugPadState, DebugPadLifoCapacity>;

class DebugPadSharedMemoryAccessor final
    : public LifoSharedMemoryAccessor<DebugPadSharedMemoryAccessor,
        DebugPadLifo, DebugPadLifoOffset> {
 public:
  DebugPadSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(ResultDebugPadActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultDebugPadDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidServer> proxy;
    NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
    return proxy->ActivateDebugPad(utility::GetAppletResourceUserId());
  }

  static Result DeactivateServer() {
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    return proxy->DeactivateDebugPad();
  }
};

DebugPadSharedMemoryAccessor& GetDebugPadSharedMemoryAccessor() {
  return utility::StaticObject<DebugPadSharedMemoryAccessor>::Get();
}

}

Result InitializeDebugPad() {
  DebugPadSharedMemoryAccessor& accessor = GetDebugPadSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  return accessor.Activate();
}

Result FinalizeDebugPad() {
  return GetDebugPadSharedMemoryAccessor().Deactivate();
}

Result GetDebugPadState(DebugPadState* pOutState) {
  if (pOutState == nullptr) {
    return ResultDebugPadNullStateBuffer;
  }
  const DebugPadLifo* pLifo = GetDebugPadSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultDebugPadNotInitialized;
  }
  pLifo->Read(pOutState, 1);
  return Result{};
}

Result GetDebugPadStates(int* pOutCount, DebugPadState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultDebugPadNullStateBuffer;
  }
  if (count < 0) {
    return ResultDebugPadInvalidStateCount;
  }
  const DebugPadLifo* pLifo = GetDebugPadSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultDebugPadNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}
