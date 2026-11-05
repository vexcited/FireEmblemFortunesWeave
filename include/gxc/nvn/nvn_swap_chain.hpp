#pragma once

#include <vector>

#include "gxc/gpu_memory_pool.hpp"
#include "gxc/nvn/nvn.hpp"
#include "gxc/swap_chain.hpp"

namespace gxc {

class NvnSwapChain final : public SwapChain {
public:
  ~NvnSwapChain() override;

  Backend GetBackend() const override;
  int AcquireTexture(AcquiredTexture* texture, Semaphore* semaphore,
    Fence* fence) override;

  NVNwindow* GetWindow() {
    return &window_;
  }

private:
  NVNwindow window_;
  std::vector<NVNtexture*> textures_;
  std::vector<RenderTargetView> targets_;
  std::vector<GpuMemory> memories_;
};

}
