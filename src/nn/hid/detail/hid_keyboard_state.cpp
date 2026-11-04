#include <algorithm>
#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultKeyboardNotInitialized = {0xa2ca};
constexpr Result ResultKeyboardActivationUpperLimitOver = {0xa4ca};
constexpr Result ResultKeyboardDeactivationLowerLimitOver = {0xa6ca};
constexpr Result ResultKeyboardNullStateBuffer = {0xa8ca};
constexpr Result ResultKeyboardInvalidStateCount = {0xaaca};

constexpr int KeyboardLifoCapacity = 17;
constexpr size_t KeyboardLifoOffset = 0x3800;

using KeyboardLifo = RingLifo<KeyboardState, KeyboardLifoCapacity>;

class KeyboardSharedMemoryAccessor final
    : public LifoSharedMemoryAccessor<KeyboardSharedMemoryAccessor,
        KeyboardLifo, KeyboardLifoOffset> {
 public:
  KeyboardSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(ResultKeyboardActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultKeyboardDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidServer> proxy;
    NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
    return proxy->ActivateKeyboard(utility::GetAppletResourceUserId());
  }

  static Result DeactivateServer() {
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    return proxy->DeactivateKeyboard();
  }
};

KeyboardSharedMemoryAccessor& GetKeyboardSharedMemoryAccessor() {
  return utility::StaticObject<KeyboardSharedMemoryAccessor>::Get();
}

}

Result InitializeKeyboard() {
  KeyboardSharedMemoryAccessor& accessor = GetKeyboardSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  return accessor.Activate();
}

Result FinalizeKeyboard() {
  return GetKeyboardSharedMemoryAccessor().Deactivate();
}

Result GetKeyboardState(KeyboardState* pOutState) {
  if (pOutState == nullptr) {
    return ResultKeyboardNullStateBuffer;
  }
  const KeyboardLifo* pLifo = GetKeyboardSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultKeyboardNotInitialized;
  }
  pLifo->Read(pOutState, 1);
  return Result{};
}

Result GetKeyboardStates(int* pOutCount, KeyboardState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultKeyboardNullStateBuffer;
  }
  if (count < 0) {
    return ResultKeyboardInvalidStateCount;
  }
  const KeyboardLifo* pLifo = GetKeyboardSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultKeyboardNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}
