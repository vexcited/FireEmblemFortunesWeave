#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultConsoleSixAxisSensorActivationUpperLimitOver = {
  0x84cca};
constexpr Result ResultConsoleSixAxisSensorDeactivationLowerLimitOver = {
  0x84eca};

constexpr size_t ConsoleSixAxisSensorOffset = 0x3c200;

struct ConsoleSixAxisSensorSharedMemoryFormat;

class ConsoleSixAxisSensorSharedMemoryAccessor final :
  public LifoSharedMemoryAccessor<ConsoleSixAxisSensorSharedMemoryAccessor,
    ConsoleSixAxisSensorSharedMemoryFormat, ConsoleSixAxisSensorOffset> {
 public:
  ConsoleSixAxisSensorSharedMemoryAccessor() : m_pTransferMemory(nullptr) {
    SetResultActivationUpperLimitOver(
      ResultConsoleSixAxisSensorActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultConsoleSixAxisSensorDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    return Result{};
  }

  static Result DeactivateServer() {
    return Result{};
  }

 private:
  void* m_pTransferMemory;
};

ConsoleSixAxisSensorSharedMemoryAccessor&
GetConsoleSixAxisSensorSharedMemoryAccessor() {
  return utility::StaticObject<ConsoleSixAxisSensorSharedMemoryAccessor>::
    Get();
}

}

Result InitializeConsoleSixAxisSensor() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  NN_RESULT_DO(
    proxy->ActivateConsoleSixAxisSensor(utility::GetAppletResourceUserId()));
  ConsoleSixAxisSensorSharedMemoryAccessor& accessor =
    GetConsoleSixAxisSensorSharedMemoryAccessor();
  NN_RESULT_DO(accessor.SetAppletResourceUserId(
    utility::GetAppletResourceUserId()));
  return accessor.Activate();
}

Result FinalizeConsoleSixAxisSensor() {
  return GetConsoleSixAxisSensorSharedMemoryAccessor().Deactivate();
}

}
