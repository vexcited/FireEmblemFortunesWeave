#pragma once

#include <memory>

#include "gxc/device.hpp"
#include "gxc/device_child.hpp"
#include "gxc/nvn/nvn.hpp"

namespace gxc {

struct DebugDesc {
  int level;
  bool enabled;
};

struct DeviceDesc {
  DebugDesc debug;
  bool unknown8;
};

class NvnDevice final : public Device {
public:
  explicit NvnDevice(const DeviceDesc& desc);
  ~NvnDevice() override;

  Backend GetBackend() const override;
  void Present(Queue* queue, SwapChain* swapChain, int index,
    int interval) override;

  int GetInteger(int name) const;

  NVNdevice* GetNative() {
    return &device_;
  }

private:
  NVNdevice device_;
  std::shared_ptr<void> unknown3008_;
};

inline NvnDevice* GetNvnDevice(const DeviceChild& child) {
  return static_cast<NvnDevice*>(child.GetDevice());
}

}
