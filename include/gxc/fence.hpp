#pragma once

#include <cstdint>

#include "gxc/device_child.hpp"

namespace gxc {

class Fence : public DeviceChild {
public:
  virtual int Wait(uint64_t timeout) = 0;
};

class Semaphore : public DeviceChild {};

}
