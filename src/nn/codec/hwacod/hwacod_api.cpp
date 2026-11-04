#include "nn/codec/hwacod/hwacod_shim.hpp"
#include "nn/codec/hwacod/hwacod_parameter.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl(const Result* result);

}

namespace nn::result::detail {

void ConvertInvalidImpl(Result result);

}

namespace nn::codec::hwacod {
namespace {

constexpr Result ResultInvalidArgument = {0x7d06f};

inline shim::HardwareAudioCodecInstance* ToShim(
  HardwareAudioCodecInstanceType* instance) {
  return reinterpret_cast<shim::HardwareAudioCodecInstance*>(instance);
}

inline const shim::HardwareAudioCodecInstance* ToShim(
  const HardwareAudioCodecInstanceType* instance) {
  return reinterpret_cast<const shim::HardwareAudioCodecInstance*>(instance);
}

inline shim::HardwareAudioCodecManager* ToShim(
  HardwareAudioCodecManagerType* manager) {
  return reinterpret_cast<shim::HardwareAudioCodecManager*>(manager);
}

inline const shim::HardwareAudioCodecManager* ToShim(
  const HardwareAudioCodecManagerType* manager) {
  return reinterpret_cast<const shim::HardwareAudioCodecManager*>(manager);
}

inline bool IsValidManagerProperties(
  HardwareAudioCodecManagerProperties properties) {
  return (properties._storage & 7) != 0;
}

}

Result InitializeHardwareAudioCodecInstance(
  HardwareAudioCodecInstanceType* instance,
  HardwareAudioCodecManagerType* manager, const InstanceParameter& parameter) {
  Result result = ValidateHardwareAudioCodecInstanceParameter(parameter);
  if (result.IsFailure()) {
    return result;
  }

  result = ToShim(manager)->InitializeInstance(ToShim(instance), parameter);
  if (result.IsFailure()) {
    return result;
  }
  return {0};
}

Result FinalizeHardwareAudioCodecInstance(
  HardwareAudioCodecInstanceType* instance) {
  const Result result =
    ToShim(instance)->GetManager()->FinalizeInstance(ToShim(instance));
  if (result.IsFailure()) {
    nn::diag::detail::AbortImpl(&result);
  }
  return result;
}

Result SetHardwareAudioCodecInstanceInput(size_t* consumedSize,
  HardwareAudioCodecInstanceType* instance, const void* data, size_t size) {
  size_t inputSize = 0;
  const InstanceParameter parameter = ToShim(instance)->GetParameter();
  Result result = shim::GetFirstInputDataSize(&inputSize, parameter, data,
    size);
  if (result.IsFailure()) {
    return result;
  }

  result = ToShim(instance)->SetInputData(data, inputSize);
  if (result.IsFailure()) {
    return result;
  }

  *consumedSize = inputSize;
  return {0};
}

void ResetHardwareAudioCodecInstance(HardwareAudioCodecInstanceType* instance) {
  ToShim(instance)->RequestReset();
}

Result GetHardwareAudioCodecInstanceOutput(
  HardwareAudioCodecInstanceType* instance, size_t* outputSize, void* buffer,
  size_t bufferSize) {
  return ToShim(instance)->GetOutputData(outputSize, buffer, bufferSize);
}

int GetHardwareAudioCodecInstanceInputDataCount(
  const HardwareAudioCodecInstanceType* instance) {
  return ToShim(instance)->GetInputDataCount();
}

int GetHardwareAudioCodecInstanceProcessingDataCount(
  const HardwareAudioCodecInstanceType* instance) {
  return ToShim(instance)->GetProcessingDataCount();
}

int GetHardwareAudioCodecInstanceOutputDataCount(
  const HardwareAudioCodecInstanceType* instance) {
  return ToShim(instance)->GetOutputDataCount();
}

InstanceParameter GetHardwareAudioCodecInstanceParameter(
  const HardwareAudioCodecInstanceType* instance) {
  return ToShim(instance)->GetParameter();
}

int64_t GetHardwareAudioCodecInstanceProcessingTime(
  const HardwareAudioCodecInstanceType* instance) {
  return ToShim(instance)->GetProcessingTime().nanoseconds;
}

Result ValidateHardwareAudioCodecManagerProperties(
  HardwareAudioCodecManagerProperties properties) {
  if (!IsValidManagerProperties(properties)) {
    return ResultInvalidArgument;
  }
  return {0};
}

size_t CalcHardwareAudioCodecManagerWorkBufferSize(
  const InstanceParameter& parameter, int instanceCount, int ioBufferCount) {
  const Result result = detail::ValidateParameter(parameter);
  if (result.IsFailure()) {
    nn::result::detail::ConvertInvalidImpl(result);
    return 0;
  }

  const shim::WorkBufferSizeCalculator calculator(parameter, instanceCount,
    ioBufferCount);
  return calculator.GetWorkBufferSize();
}

Result InitializeHardwareAudioCodecManager(
  HardwareAudioCodecManagerType* manager, os::SystemEventType* event,
  void* buffer, size_t size, const InstanceParameter& parameter,
  int instanceCount, int ioBufferCount,
  HardwareAudioCodecManagerProperties properties) {
  const Result result = detail::ValidateParameter(parameter);
  if (result.IsFailure()) {
    return result;
  }
  if (!IsValidManagerProperties(properties)) {
    return ResultInvalidArgument;
  }

  const shim::WorkBufferSizeCalculator calculator(parameter, instanceCount,
    ioBufferCount);
  return ToShim(manager)->Initialize(event, buffer, size, calculator,
    properties);
}

Result InitializeHardwareAudioCodecManager(
  HardwareAudioCodecManagerType* manager, os::SystemEventType* event,
  void* buffer, size_t size, const InstanceParameter& parameter,
  int instanceCount, int ioBufferCount) {
  return InitializeHardwareAudioCodecManager(manager, event, buffer, size,
    parameter, instanceCount, ioBufferCount, {7});
}

void FinalizeHardwareAudioCodecManager(
  HardwareAudioCodecManagerType* manager) {
  ToShim(manager)->Finalize();
}

bool CanHardwareAudioCodecInstanceParameterInstantiate(
  const HardwareAudioCodecManagerType* manager,
  const InstanceParameter& parameter) {
  if (detail::ValidateParameter(parameter).IsFailure()) {
    return false;
  }
  return ToShim(manager)->CanInstantiate(parameter);
}

void ExecuteHardwareAudioCodecProcessing(
  HardwareAudioCodecManagerType* manager) {
  ToShim(manager)->Execute();
}

void UpdateHardwareAudioCodecProcessResult(
  HardwareAudioCodecManagerType* manager) {
  ToShim(manager)->UpdateProcessResult();
}

int GetHardwareAudioCodecTotalInstanceResourceCount(
  const HardwareAudioCodecManagerType* manager) {
  return ToShim(manager)->GetTotalInstanceCount();
}

int GetHardwareAudioCodecFreeInstanceResourceCount(
  const HardwareAudioCodecManagerType* manager) {
  return ToShim(manager)->GetFreeInstanceCount();
}

int GetHardwareAudioCodecUsingInstanceResourceCount(
  const HardwareAudioCodecManagerType* manager) {
  return ToShim(manager)->GetUsingInstanceCount();
}

int GetHardwareAudioCodecTotalIoBufferCount(
  const HardwareAudioCodecManagerType* manager) {
  return ToShim(manager)->GetTotalIoBufferCount();
}

int GetHardwareAudioCodecFreeIoBufferCount(
  const HardwareAudioCodecManagerType* manager) {
  return ToShim(manager)->GetFreeIoBufferCount();
}

int GetHardwareAudioCodecUsingIoBufferCount(
  const HardwareAudioCodecManagerType* manager) {
  return ToShim(manager)->GetUsingIoBufferCount();
}

}
