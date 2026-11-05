#pragma once

namespace gfx {

class IRenderTask {
public:
  virtual ~IRenderTask() = default;

  virtual void Run(void* context) = 0;
};

}
