#pragma once

#include <cstdint>
#include <vector>

#include "gxc/descriptor_pool.hpp"
#include "gxc/gpu_memory_pool.hpp"
#include "gxc/mutex.hpp"
#include "gxc/nvn/nvn.hpp"

namespace gxc {

struct DescriptorPoolDesc {
  int textureCount;
  int samplerCount;
  GpuMemoryPool* memoryPool;
};

class NvnDescriptorPool final : public DescriptorPool {
public:
  explicit NvnDescriptorPool(const DescriptorPoolDesc& desc);
  ~NvnDescriptorPool() override;

  Backend GetBackend() const override;
  TextureDescriptor AllocateTextureDescriptor() override;
  void FreeTextureDescriptor(TextureDescriptor descriptor) override;
  int AllocateTexture() override;
  void FreeTexture(int id) override;
  int AllocateSampler() override;
  void FreeSampler(int id) override;
  TextureDescriptor AllocateImageDescriptor() override;
  void FreeImageDescriptor(TextureDescriptor descriptor) override;
  TextureDescriptor AllocateBufferDescriptor() override;
  void FreeBufferDescriptor(TextureDescriptor descriptor) override;

  const NVNtexturePool* GetTexturePool() const {
    return &texturePool_;
  }

  const NVNsamplerPool* GetSamplerPool() const {
    return &samplerPool_;
  }

  void Lock() {
    mutex_.Lock();
  }

  void Unlock() {
    mutex_.Unlock();
  }

private:
  struct Bits {
    void Assign(uint64_t* words, int size) {
      words_ = words;
      size_ = size;
      Clear();
    }

    void Clear() {
      int count = (size_ + 63) >> 6;
      for (int i = 0; i < count; i++) {
        words_[i] = 0;
      }
    }

    int Size() const {
      return size_;
    }

    bool Test(uint32_t index) const {
      return (words_[index >> 6] & 1ULL << (index & 63)) != 0;
    }

    void Set(uint32_t index) {
      words_[index >> 6] |= 1ULL << (index & 63);
    }

    void Reset(int index) {
      words_[index >> 6] &= ~(1ULL << (index & 63));
    }

    uint64_t* words_ = nullptr;
    int size_ = 0;
  };

  static int Allocate(Bits& bits, int base) {
    for (int i = 0; i < bits.Size(); i++) {
      if (!bits.Test(i)) {
        bits.Set(i);
        return base + i;
      }
    }

    return -1;
  }

  NVNtexturePool texturePool_;
  NVNsamplerPool samplerPool_;
  GpuMemory textureMemory_;
  GpuMemory samplerMemory_;
  int textureBase_ = 0;
  int samplerBase_ = 0;
  int textureCapacity_ = 0;
  int samplerCapacity_ = 0;
  Bits textureBits_;
  Bits samplerBits_;
  std::vector<uint8_t> textureStorage_;
  std::vector<uint8_t> samplerStorage_;
  Mutex mutex_{true};
};

static_assert(sizeof(NvnDescriptorPool) == 0xf8);

}
