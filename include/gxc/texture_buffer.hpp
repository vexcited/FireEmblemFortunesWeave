#pragma once

#include "gxc/descriptor_pool.hpp"
#include "gxc/device_child.hpp"
#include "gxc/render_target_view.hpp"

namespace gxc {

class ColorBuffer : public Resource {
public:
  virtual RenderTargetView GetView() const = 0;
  virtual TextureDescriptor GetDescriptor() const = 0;
  virtual int GetImageId() const = 0;
  virtual RenderTargetView GetView(int layer, int level) const = 0;
  virtual TextureDescriptor GetDescriptor(int layer, int level) const = 0;
  virtual int GetImageId(int layer, int level) const = 0;
  virtual int GetLevelCount() const = 0;
  virtual int GetLayerCount() const = 0;
};

class DepthBuffer : public Resource {
public:
  virtual RenderTargetView GetView() const = 0;
  virtual TextureDescriptor GetDescriptor() const = 0;
  virtual RenderTargetView GetView(int index) const = 0;
  virtual TextureDescriptor GetDescriptor(int index) const = 0;
};

}
