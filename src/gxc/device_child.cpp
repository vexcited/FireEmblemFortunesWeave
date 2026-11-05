#include "gxc/device.hpp"
#include "gxc/device_child.hpp"

namespace gxc {

namespace {

Device* s_instance = nullptr;

}

void DeviceChild::SetDevice(Device* device) {
  s_instance = device;
}

DeviceChild::DeviceChild() {}

DeviceChild::~DeviceChild() {}

Device* DeviceChild::GetDevice() const {
  return s_instance;
}

Backend DeviceChild::GetBackend() const {
  return Backend::kNone;
}

void DeviceChild::SetDebugLabel(std::string_view) {}

}
