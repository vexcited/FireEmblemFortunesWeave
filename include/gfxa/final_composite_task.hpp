#pragma once

#include <stdint.h>

#include <memory>

#include "gfx/render/render_task.hpp"

namespace gfxa {

#pragma GCC visibility push(hidden)

class RenderObject {
public:
  virtual ~RenderObject();
};

// A render target binding that is detached from the renderer before it
// is destroyed.
class TargetBinding {
public:
  ~TargetBinding();

  void Detach(void* targets);

private:
  uint8_t unknown00_[0x80];
};

struct Renderer {
  uint8_t unknown00_[0x238];
  uint8_t compositeTargets[0x10];
};

extern Renderer* g_renderer;

class FinalCompositeTask : public gfx::IRenderTask {
public:
  ~FinalCompositeTask() override;

  void Run(void* context) override;

private:
  void* unknown08_;
  TargetBinding binding_;
  std::shared_ptr<void> resource_;
  std::unique_ptr<RenderObject> first_;
  std::unique_ptr<RenderObject> second_;
};

#pragma GCC visibility pop

}
