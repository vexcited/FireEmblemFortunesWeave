#pragma once

#include "gxc/device_child.hpp"

namespace gxc {

class Queue;
class SwapChain;

class Device {
public:
  virtual ~Device() = default;

  virtual Backend GetBackend() const = 0;
  virtual void Present(Queue* queue, SwapChain* swapChain, int index,
    int interval) = 0;
};

}
