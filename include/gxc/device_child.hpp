#pragma once

#include <cstdint>
#include <string_view>

namespace gxc {

class Device;

enum class Backend : int {
  kNone,
  kNvn,
};

class DeviceChild {
public:
  DeviceChild();
  virtual ~DeviceChild();

  static void SetDevice(Device* device);
  Device* GetDevice() const;

  virtual Backend GetBackend() const;
  virtual void SetDebugLabel(std::string_view label);
};

enum class ResourceState : int {
  kUndefined,
  kRenderTarget,
  kShaderResource,
  kUnknown3,
  kStorage,
  kCopyDestination,
  kDepthTarget,
};

class Resource : public DeviceChild {
public:
  ResourceState GetState() const {
    return state_;
  }

  void SetState(ResourceState state) {
    state_ = state;
  }

protected:
  ResourceState state_ = ResourceState::kUndefined;
};

}
