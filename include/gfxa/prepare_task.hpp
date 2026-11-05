#pragma once

#include <stdint.h>

#include <memory>

#include "gfx/render/render_task.hpp"

namespace gfxa {

#pragma GCC visibility push(hidden)

class PrepareTask : public gfx::IRenderTask {
public:
  ~PrepareTask() override;

  void Run(void* context) override;

private:
  void* unknown08_;
  std::unique_ptr<uint8_t[]> buffer_;
};

#pragma GCC visibility pop

}
