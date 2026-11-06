#include <cstdint>

#include "gfx/flow/resource.hpp"

namespace gxc {

class ColorBuffer;
class DepthBuffer;

}

namespace gfx {

template<int N>
class ConstantBuffer;

template<int N>
class UnorderedAccessBuffer;

namespace flow {

// The 0x50 byte texture resources the render graph creates, with the 32
// byte description they are built from.
template<typename T>
class TextureResource : public ResourceBase {
public:
  void* GetNative() const override;
  void Acquire() override;
  void Release() override;

private:
  bool acquired_;
  T* native_;
  uint64_t desc_[4];
};

// Only the destructors are known, the members are trivially destructible.
template<typename T>
class BufferResource : public ResourceBase {
public:
  void* GetNative() const override;
  void Acquire() override;
  void Release() override;

private:
  T* native_;
};

template class TextureResource<gxc::ColorBuffer>;
template class TextureResource<gxc::DepthBuffer>;
template class BufferResource<ConstantBuffer<2>>;
template class BufferResource<UnorderedAccessBuffer<1>>;
template class BufferResource<UnorderedAccessBuffer<2>>;

}

}
