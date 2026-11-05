#pragma once

#include <optional>

#include "gxc/device_child.hpp"

namespace gxc {

class CommandList;
class Fence;
class Semaphore;

struct QueueSignal {
  Fence* fence;
  int flags;
  bool flush;
};

class Queue : public DeviceChild {
public:
  virtual void Submit(CommandList* commands,
    const std::optional<QueueSignal>& signal) = 0;
  virtual void Wait(Semaphore* semaphore) = 0;
};

}
