#include "gxc/nvn/nvn_device.hpp"

#include <algorithm>

#include "graphics/nvn_dispatch.hpp"
#include "graphics/nvn_secondary.hpp"
#include "gxc/nvn/nvn_queue.hpp"
#include "gxc/nvn/nvn_swap_chain.hpp"

namespace gxc {

namespace {

void OnDebugMessage(int, int, int, int, const char*, void*) {}

}

NvnDevice::NvnDevice(const DeviceDesc& desc) {
  auto resolver = reinterpret_cast<fw::graphics::nvn::Resolver>(
    nvnBootstrapLoader("nvnDeviceGetProcAddress"));
  fw::graphics::nvn::LoadProcedures(nullptr, resolver);

  int flags = 0;
  if (desc.debug.enabled) {
    int levels[] = {0x20, 0x40, 0x1, 0x4, 0x10};
    flags = levels[std::min(std::max(desc.debug.level, 0), 4)];
  }

  flags |= desc.unknown8 << 10;
  NVNdeviceBuilder builder;
  nvnDeviceBuilderSetDefaults(&builder);
  nvnDeviceBuilderSetFlags(&builder, flags);
  nvnDeviceInitialize(&device_, &builder);
  fw::graphics::nvn::LoadProcedures(&device_, resolver);
  fw::graphics::nvn::secondary::LoadProcedures(&device_, resolver);
  if (desc.debug.enabled) {
    nvnDeviceInstallDebugCallback(&device_, OnDebugMessage, nullptr,
      true);
  }

  int version = -1;
  nvnDeviceGetInteger(&device_, 0, &version);
  version = -1;
  nvnDeviceGetInteger(&device_, 1, &version);
}

NvnDevice::~NvnDevice() {
  unknown3008_.reset();
  nvnDeviceFinalize(&device_);
}

int NvnDevice::GetInteger(int name) const {
  int value = -1;
  nvnDeviceGetInteger(&device_, name, &value);
  return value;
}

void NvnDevice::Present(Queue* queue, SwapChain* swapChain, int index,
  int interval) {
  NVNwindow* window = static_cast<NvnSwapChain*>(swapChain)->GetWindow();
  if (nvnWindowGetPresentInterval(window) != interval) {
    nvnWindowSetPresentInterval(window, interval);
  }

  nvnQueuePresentTexture(static_cast<NvnQueue*>(queue)->GetNative(),
    window, index);
}

Backend NvnDevice::GetBackend() const {
  return Backend::kNvn;
}

}
