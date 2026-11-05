#include "gxc/nvn/nvn_descriptor_pool.hpp"

#include "gxc/nvn/nvn_device.hpp"

namespace gxc {

namespace {

constexpr int kReservedTextures = 17;
constexpr int kReservedSamplers = 18;
constexpr int kTextureDescriptorSize = 15;
constexpr int kSamplerDescriptorSize = 16;

}

NvnDescriptorPool::NvnDescriptorPool(const DescriptorPoolDesc& desc) {
  NvnDevice* device = GetNvnDevice(*this);
  textureBase_ = device->GetInteger(kReservedTextures);
  samplerBase_ = device->GetInteger(kReservedSamplers);
  textureCapacity_ = desc.textureCount - textureBase_;
  samplerCapacity_ = desc.samplerCount - samplerBase_;

  int textureSize = device->GetInteger(kTextureDescriptorSize);
  textureMemory_ = desc.memoryPool->AllocateMemory(
    desc.textureCount * static_cast<int64_t>(textureSize), textureSize);
  nvnTexturePoolInitialize(&texturePool_, textureMemory_.GetPool(),
    textureMemory_.GetOffset(), desc.textureCount);
  textureStorage_.resize(((desc.textureCount + 63) >> 6) * 8);
  textureBits_.Assign(reinterpret_cast<uint64_t*>(textureStorage_.data()),
    desc.textureCount);
  textureBits_.Clear();

  int samplerSize = device->GetInteger(kSamplerDescriptorSize);
  samplerMemory_ = desc.memoryPool->AllocateMemory(
    desc.samplerCount * static_cast<int64_t>(samplerSize), samplerSize);
  nvnSamplerPoolInitialize(&samplerPool_, samplerMemory_.GetPool(),
    samplerMemory_.GetOffset(), desc.samplerCount);
  samplerStorage_.resize(((desc.samplerCount + 63) >> 6) * 8);
  samplerBits_.Assign(reinterpret_cast<uint64_t*>(samplerStorage_.data()),
    desc.samplerCount);
  samplerBits_.Clear();
}

NvnDescriptorPool::~NvnDescriptorPool() {
  nvnTexturePoolFinalize(&texturePool_);
  nvnSamplerPoolFinalize(&samplerPool_);
}

Backend NvnDescriptorPool::GetBackend() const {
  return Backend::kNvn;
}

TextureDescriptor NvnDescriptorPool::AllocateTextureDescriptor() {
  return {nullptr, Allocate(textureBits_, textureBase_)};
}

void NvnDescriptorPool::FreeTextureDescriptor(TextureDescriptor descriptor) {
  textureBits_.Reset(descriptor.id - textureBase_);
}

int NvnDescriptorPool::AllocateTexture() {
  return Allocate(textureBits_, textureBase_);
}

void NvnDescriptorPool::FreeTexture(int id) {
  textureBits_.Reset(id - textureBase_);
}

int NvnDescriptorPool::AllocateSampler() {
  return Allocate(samplerBits_, samplerBase_);
}

void NvnDescriptorPool::FreeSampler(int id) {
  samplerBits_.Reset(id - samplerBase_);
}

TextureDescriptor NvnDescriptorPool::AllocateImageDescriptor() {
  return {nullptr, 0};
}

void NvnDescriptorPool::FreeImageDescriptor(TextureDescriptor) {}

TextureDescriptor NvnDescriptorPool::AllocateBufferDescriptor() {
  return {nullptr, 0};
}

void NvnDescriptorPool::FreeBufferDescriptor(TextureDescriptor) {}

}
