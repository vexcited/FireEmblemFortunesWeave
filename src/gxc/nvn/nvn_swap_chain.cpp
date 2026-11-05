#include "gxc/nvn/nvn_swap_chain.hpp"

#include "gxc/nvn/nvn_fence.hpp"

namespace gxc {

NvnSwapChain::~NvnSwapChain() {
  nvnWindowFinalize(&window_);
  for (NVNtexture* texture : textures_) {
    nvnTextureFinalize(texture);
    delete texture;
  }
}

int NvnSwapChain::AcquireTexture(AcquiredTexture* texture,
  Semaphore* semaphore, Fence* fence) {
  NVNsync* sync = static_cast<NvnSemaphore*>(semaphore)->GetSync();
  int result = nvnWindowAcquireTexture(&window_, sync, &texture->index);
  if (fence != nullptr) {
    static_cast<NvnFence*>(fence)->SetExternal(sync);
  }

  if (result == 0) {
    texture->texture = textures_[texture->index];
    texture->target = &targets_[texture->index];
  }

  return result;
}

Backend NvnSwapChain::GetBackend() const {
  return Backend::kNvn;
}

}
