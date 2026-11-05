#pragma once

#include "gxc/device_child.hpp"

namespace gxc {

struct TextureDescriptor {
  const void* object;
  int id;
};

class DescriptorPool : public DeviceChild {
public:
  virtual TextureDescriptor AllocateTextureDescriptor() = 0;
  virtual void FreeTextureDescriptor(TextureDescriptor descriptor) = 0;
  virtual int AllocateTexture() = 0;
  virtual void FreeTexture(int id) = 0;
  virtual int AllocateSampler() = 0;
  virtual void FreeSampler(int id) = 0;
  virtual TextureDescriptor AllocateImageDescriptor() = 0;
  virtual void FreeImageDescriptor(TextureDescriptor descriptor) = 0;
  virtual TextureDescriptor AllocateBufferDescriptor() = 0;
  virtual void FreeBufferDescriptor(TextureDescriptor descriptor) = 0;
};

}
