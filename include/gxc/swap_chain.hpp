#pragma once

#include "gxc/device_child.hpp"
#include "gxc/render_target_view.hpp"

namespace gxc {

class Fence;
class Semaphore;

struct AcquiredTexture {
  int index;
  const NVNtexture* texture;
  const RenderTargetView* target;
};

class SwapChain : public DeviceChild {
public:
  virtual int AcquireTexture(AcquiredTexture* texture, Semaphore* semaphore,
    Fence* fence) = 0;
};

}
