#include <algorithm>
#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultDigitizerNotInitialized = {0x962ca};
constexpr Result ResultDigitizerActivationUpperLimitOver = {0x964ca};
constexpr Result ResultDigitizerDeactivationLowerLimitOver = {0x966ca};
constexpr Result ResultDigitizerNullStateBuffer = {0x968ca};
constexpr Result ResultDigitizerInvalidStateCount = {0x96aca};

constexpr int DigitizerLifoCapacity = 17;
constexpr size_t DigitizerLifoOffset = 0x3c00;

using DigitizerLifo = RingLifo<DigitizerState, DigitizerLifoCapacity>;

class DigitizerSharedMemoryAccessor final
    : public LifoSharedMemoryAccessor<DigitizerSharedMemoryAccessor,
        DigitizerLifo, DigitizerLifoOffset> {
 public:
  DigitizerSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(ResultDigitizerActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultDigitizerDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidServer> proxy;
    NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
    return proxy->ActivateDigitizer(utility::GetAppletResourceUserId());
  }

  static Result DeactivateServer() {
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    return proxy->DeactivateDigitizer();
  }
};

DigitizerSharedMemoryAccessor& GetDigitizerSharedMemoryAccessor() {
  return utility::StaticObject<DigitizerSharedMemoryAccessor>::Get();
}

}

Result InitializeDigitizer() {
  DigitizerSharedMemoryAccessor& accessor = GetDigitizerSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  return accessor.Activate();
}

Result FinalizeDigitizer() {
  return GetDigitizerSharedMemoryAccessor().Deactivate();
}

Result GetDigitizerState(DigitizerState* pOutState) {
  if (pOutState == nullptr) {
    return ResultDigitizerNullStateBuffer;
  }
  const DigitizerLifo* pLifo = GetDigitizerSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultDigitizerNotInitialized;
  }
  pLifo->Read(pOutState, 1);
  return Result{};
}

Result GetDigitizerStates(
  int* pOutCount, DigitizerState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultDigitizerNullStateBuffer;
  }
  if (count < 0) {
    return ResultDigitizerInvalidStateCount;
  }
  const DigitizerLifo* pLifo = GetDigitizerSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultDigitizerNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}
