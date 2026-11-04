#pragma once

#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs::detail {

enum DevicePort : uint32_t {
  DevicePort_SdCard = 1,
  DevicePort_GameCard = 2,
};

inline Result SetDeviceSimulationEvent(DevicePort port,
  SimulatingDeviceTargetOperation operation,
  SimulatingDeviceAccessFailureEventType failureEventType,
  Result respondingFailureResult, bool isPersistent) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  return deviceOperator->SetDeviceSimulationEvent(port,
    static_cast<uint32_t>(operation),
    static_cast<uint32_t>(failureEventType),
    respondingFailureResult.value & 0x3FFFFF, isPersistent);
}

}
