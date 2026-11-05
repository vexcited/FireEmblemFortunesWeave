#pragma once

#include <memory>
#include <string_view>
#include <vector>

#include "gxc/gpu_memory_pool.hpp"
#include "gxc/nvn/nvn.hpp"
#include "gxc/texture_buffer.hpp"

namespace gxc {

class NvnDescriptorPool;

class NvnColorBuffer final : public ColorBuffer {
public:
  ~NvnColorBuffer() override;

  Backend GetBackend() const override;
  void SetDebugLabel(std::string_view label) override;
  RenderTargetView GetView() const override;
  TextureDescriptor GetDescriptor() const override;
  int GetImageId() const override;
  RenderTargetView GetView(int layer, int level) const override;
  TextureDescriptor GetDescriptor(int layer, int level) const override;
  int GetImageId(int layer, int level) const override;
  int GetLevelCount() const override;
  int GetLayerCount() const override;

private:
  // The first entry views the whole texture, then come the views of the
  // layers, each followed by the views of its levels.
  int GetIndex(int layer, int level) const {
    if (levelCount_ == 1) {
      return layer + 1;
    }

    return (layer + 1) * levelCount_ + (layer + 1) + level + 1;
  }

  GpuMemory memory_;
  std::unique_ptr<NVNtexture> texture_;
  NvnDescriptorPool* pool_ = nullptr;
  bool registered_ = false;
  int levelCount_ = 0;
  int layerCount_ = 0;
  std::vector<RenderTargetView> views_;
  std::vector<TextureDescriptor> descriptors_;
  std::vector<int> imageIds_;
};

static_assert(sizeof(NvnColorBuffer) == 0x90);

class NvnDepthBuffer final : public DepthBuffer {
public:
  ~NvnDepthBuffer() override;

  Backend GetBackend() const override;
  void SetDebugLabel(std::string_view label) override;
  RenderTargetView GetView() const override;
  TextureDescriptor GetDescriptor() const override;
  RenderTargetView GetView(int index) const override;
  TextureDescriptor GetDescriptor(int index) const override;

private:
  GpuMemory memory_;
  std::unique_ptr<NVNtexture> texture_;
  NvnDescriptorPool* pool_ = nullptr;
  bool registered_ = false;
  std::vector<RenderTargetView> views_;
  std::vector<TextureDescriptor> descriptors_;
};

static_assert(sizeof(NvnDepthBuffer) == 0x70);

}
