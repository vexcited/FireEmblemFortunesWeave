#include "gxc/nvn/nvn_texture_buffer.hpp"

namespace gxc {

RenderTargetView NvnColorBuffer::GetView(int layer, int level) const {
  if (layerCount_ == 1 && levelCount_ == 1) {
    return {};
  }

  return views_[GetIndex(layer, level)];
}

TextureDescriptor NvnColorBuffer::GetDescriptor(int layer, int level) const {
  if (layerCount_ == 1 && levelCount_ == 1) {
    return {nullptr, -1};
  }

  return descriptors_[GetIndex(layer, level)];
}

int NvnColorBuffer::GetImageId(int layer, int level) const {
  if (layerCount_ == 1 && levelCount_ == 1) {
    return -1;
  }

  return imageIds_[GetIndex(layer, level)];
}

Backend NvnColorBuffer::GetBackend() const {
  return Backend::kNvn;
}

RenderTargetView NvnColorBuffer::GetView() const {
  return views_.empty() ? RenderTargetView{} : views_[0];
}

TextureDescriptor NvnColorBuffer::GetDescriptor() const {
  return descriptors_.empty() ? TextureDescriptor{nullptr, -1} :
    descriptors_[0];
}

int NvnColorBuffer::GetImageId() const {
  return imageIds_.empty() ? -1 : imageIds_[0];
}

int NvnColorBuffer::GetLevelCount() const {
  return levelCount_;
}

int NvnColorBuffer::GetLayerCount() const {
  return layerCount_;
}

Backend NvnDepthBuffer::GetBackend() const {
  return Backend::kNvn;
}

RenderTargetView NvnDepthBuffer::GetView() const {
  return views_.empty() ? RenderTargetView{} : views_[0];
}

TextureDescriptor NvnDepthBuffer::GetDescriptor() const {
  return descriptors_.empty() ? TextureDescriptor{nullptr, -1} :
    descriptors_[0];
}

RenderTargetView NvnDepthBuffer::GetView(int index) const {
  if (static_cast<size_t>(index) >= views_.size()) {
    return {};
  }

  return views_[index + 1];
}

TextureDescriptor NvnDepthBuffer::GetDescriptor(int index) const {
  if (static_cast<size_t>(index) >= descriptors_.size()) {
    return {nullptr, -1};
  }

  return descriptors_[index + 1];
}

}
