#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_sensor.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::hid {

struct alignas(16) SevenSixAxisSensorState {
  int64_t timestamp;
  int64_t samplingNumber;
  int64_t coordinateNumber;
  int64_t reserved;
  float rotation[4];
  util::Float3 position;
};

void ConvertState(SevenSixAxisSensorState* pOutState,
  const SevenSixAxisSensorState& state) {
  *pOutState = state;
}

}

namespace nn::hid::detail {

namespace {

constexpr Result ResultConsoleSixAxisSensorActivationUpperLimitOver = {
  0x84cca};
constexpr Result ResultConsoleSixAxisSensorDeactivationLowerLimitOver = {
  0x84eca};

constexpr Result ResultSevenSixAxisSensorNotInitialized = {0x872ca};
constexpr Result ResultSevenSixAxisSensorNullStateBuffer = {0x878ca};
constexpr Result ResultSevenSixAxisSensorInvalidStateCount = {0x87aca};

constexpr size_t ConsoleSixAxisSensorOffset = 0x3c200;

constexpr size_t SevenSixAxisSensorStateBufferSize = 0x1000;
constexpr size_t SevenSixAxisSensorWorkBufferSize = 0x7f000;
constexpr int SevenSixAxisSensorLifoCapacity = 33;

struct ConsoleSixAxisSensorSharedMemoryFormat {
  int64_t samplingNumber;
  bool isSevenSixAxisSensorAtRest;
  float verticalizationError;
  util::Float3 gyroBias;
};

using SevenSixAxisSensorLifo =
  RingLifo<SevenSixAxisSensorState, SevenSixAxisSensorLifoCapacity>;

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

  void SetTransferMemory(void* address) {
    m_pTransferMemory = address;
  }

  const SevenSixAxisSensorLifo* GetSevenSixAxisSensorLifo() const {
    return static_cast<const SevenSixAxisSensorLifo*>(m_pTransferMemory);
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

Result InitializeSevenSixAxisSensor(void* buffer, size_t) {
  ConsoleSixAxisSensorSharedMemoryAccessor& accessor =
    GetConsoleSixAxisSensorSharedMemoryAccessor();
  NN_RESULT_DO(accessor.SetAppletResourceUserId(
    utility::GetAppletResourceUserId()));
  NN_RESULT_DO(accessor.Activate());
  os::TransferMemoryType stateTransferMemory = {};
  if (os::CreateTransferMemory(&stateTransferMemory, buffer,
    SevenSixAxisSensorStateBufferSize, os::MemoryPermission_ReadOnly)
    .IsFailure()) {
    return ResultSevenSixAxisSensorNullStateBuffer;
  }
  const uint32_t stateHandle = os::DetachTransferMemory(&stateTransferMemory);
  os::DestroyTransferMemory(&stateTransferMemory);
  os::TransferMemoryType workTransferMemory = {};
  if (os::CreateTransferMemory(&workTransferMemory,
    static_cast<uint8_t*>(buffer) + SevenSixAxisSensorStateBufferSize,
    SevenSixAxisSensorWorkBufferSize, os::MemoryPermission_None)
    .IsFailure()) {
    return ResultSevenSixAxisSensorNullStateBuffer;
  }
  const uint32_t workHandle = os::DetachTransferMemory(&workTransferMemory);
  os::DestroyTransferMemory(&workTransferMemory);
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  NN_RESULT_DO(proxy->InitializeSevenSixAxisSensor(
    utility::GetAppletResourceUserId(), sf::NativeHandle(stateHandle, true),
    SevenSixAxisSensorStateBufferSize, sf::NativeHandle(workHandle, true),
    SevenSixAxisSensorWorkBufferSize));
  accessor.SetTransferMemory(buffer);
  return Result{};
}

Result FinalizeSevenSixAxisSensor() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  NN_RESULT_DO(
    proxy->FinalizeSevenSixAxisSensor(utility::GetAppletResourceUserId()));
  GetConsoleSixAxisSensorSharedMemoryAccessor().SetTransferMemory(nullptr);
  return Result{};
}

Result GetSevenSixAxisSensorStates(int* pOutCount,
  SevenSixAxisSensorState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultSevenSixAxisSensorNullStateBuffer;
  }
  if (count < 0) {
    return ResultSevenSixAxisSensorInvalidStateCount;
  }
  const SevenSixAxisSensorLifo* pLifo =
    GetConsoleSixAxisSensorSharedMemoryAccessor().GetSevenSixAxisSensorLifo();
  if (pLifo == nullptr) {
    return ResultSevenSixAxisSensorNullStateBuffer;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

Result IsSevenSixAxisSensorAtRest(bool* pOutIsAtRest) {
  const ConsoleSixAxisSensorSharedMemoryFormat* pFormat =
    GetConsoleSixAxisSensorSharedMemoryAccessor().GetLifo();
  if (pFormat == nullptr) {
    return ResultSevenSixAxisSensorNotInitialized;
  }
  *pOutIsAtRest = pFormat->isSevenSixAxisSensorAtRest;
  return Result{};
}

Result GetSensorFusionError(float* pOutError) {
  const ConsoleSixAxisSensorSharedMemoryFormat* pFormat =
    GetConsoleSixAxisSensorSharedMemoryAccessor().GetLifo();
  if (pFormat == nullptr) {
    return ResultSevenSixAxisSensorNotInitialized;
  }
  *pOutError = pFormat->verticalizationError;
  return Result{};
}

Result GetGyroBias(util::Float3* pOutGyroBias) {
  const ConsoleSixAxisSensorSharedMemoryFormat* pFormat =
    GetConsoleSixAxisSensorSharedMemoryAccessor().GetLifo();
  if (pFormat == nullptr) {
    return ResultSevenSixAxisSensorNotInitialized;
  }
  *pOutGyroBias = pFormat->gyroBias;
  return Result{};
}

}
