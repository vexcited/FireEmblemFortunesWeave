#pragma once

#include "gxc/nvn/nvn.hpp"

namespace gxc {

struct RenderTargetView {
  const NVNtexture* texture;
  const NVNtextureView* view;
};

}
