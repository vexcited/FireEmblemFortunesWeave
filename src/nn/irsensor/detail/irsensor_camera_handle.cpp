#include "nn/irsensor/detail/irsensor_status_manager.hpp"

namespace nn::irsensor::detail {

void MakeIrCameraHandle(IrCameraHandle* pOutHandle, const uint32_t& npadId) {
  uint32_t id = npadId;
  int8_t playerNumber = id < 8 ? id : id == 0x10 ? 9 : 8;

  uint32_t handle = playerNumber;
  handle &= ~0xff00u;
  pOutHandle->_handle = handle;
}

uint8_t GetIrCameraHandleDeviceType(const IrCameraHandle& handle) {
  return handle._handle >> 8;
}

int GetIrCameraHandlePlayerNumber(const IrCameraHandle& handle) {
  return static_cast<int8_t>(handle._handle);
}

applet::AppletResourceUserId GetAppletResourceUserId() {
  return applet::GetAppletResourceUserId();
}

}
