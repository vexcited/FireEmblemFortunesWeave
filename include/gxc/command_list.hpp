#pragma once

#include <cstddef>
#include <cstdint>

#include "gxc/device_child.hpp"
#include "gxc/nvn/nvn.hpp"
#include "gxc/render_target_view.hpp"

namespace gxc {

class DescriptorPool;
class Fence;

struct ResourceTransition {
  Resource* resource;
  ResourceState state;
};

// The high byte of counts is the attribute count, the low byte the stream
// count.
struct VertexState {
  const NVNvertexAttribState* attribs;
  const NVNvertexStreamState* streams;
  uint16_t counts;
};

enum class DepthStencilClear : int {
  kDepth,
  kStencil,
  kDepthStencil,
};

enum class IndexType : int {
  kUnsignedByte,
  kUnsignedShort,
  kUnsignedInt,
};

enum ShaderStageBits : uint32_t {
  kStageVertex = 1,
  kStageFragment = 2,
  kStageGeometry = 4,
  kStageCompute = 8,
};

enum StateCacheBits : uint32_t {
  kStateCacheProgram = 1,
  kStateCacheVertex = 2,
};

class CommandList : public DeviceChild {
public:
  virtual uint32_t GetFlags() const = 0;
  virtual void Begin() = 0;
  virtual void End() = 0;
  virtual void Transition(Resource* resource, ResourceState state) = 0;
  virtual void Transition(const ResourceTransition* transitions,
    size_t count) = 0;
  virtual void SetViewport(int x, int y, int width, int height) = 0;
  virtual void SetViewport(int x, int y, int width, int height, float near,
    float far) = 0;
  virtual void SetScissor(int x, int y, int width, int height) = 0;
  virtual void SetRenderTarget(RenderTargetView color) = 0;
  virtual void SetRenderTarget(RenderTargetView color,
    RenderTargetView depth) = 0;
  virtual void SetDepthTarget(RenderTargetView depth) = 0;
  virtual void SetRenderTargets(size_t count,
    const RenderTargetView* colors) = 0;
  virtual void SetRenderTargets(size_t count, const RenderTargetView* colors,
    RenderTargetView depth) = 0;
  virtual void Unknown17() = 0;
  virtual void ClearColor(int index, const float* color) = 0;
  virtual void ClearDepthStencil(float depth, int stencil,
    DepthStencilClear mode) = 0;
  virtual void SetDescriptorPool(const DescriptorPool* pool) = 0;
  virtual void SetDepthClamp(bool enable) = 0;
  virtual void BindVertexBuffer(int index, uint64_t address,
    size_t size) = 0;
  virtual void BindVertexBuffers(int first, const NVNbufferRange* ranges,
    int count) = 0;
  virtual void SetIndexBuffer(uint64_t address, IndexType type) = 0;
  virtual void BindProgram(uint32_t stages, const NVNprogram* program) = 0;
  virtual void BindVertexState(const VertexState& state) = 0;

  // NvnCommandList clears its cached bindings for the bits set in flags.
  virtual void InvalidateStateCache(uint32_t flags) = 0;

  virtual void BindUniformBuffer(uint32_t stages, int index,
    uint64_t address, size_t size) = 0;
  virtual void BindStorageBuffer(uint32_t stages, int index,
    uint64_t address, size_t size) = 0;
  virtual void BindTexelFetch(uint32_t stages, int index,
    const DescriptorPool* pool, int textureId) = 0;
  virtual void BindTexture(uint32_t stages, int index,
    const DescriptorPool* pool, int textureId, int samplerId) = 0;
  virtual void BindImage(uint32_t stages, int index, int imageId) = 0;
  virtual void SetPrimitive(int primitive) = 0;
  virtual void Draw(int count, int first) = 0;
  virtual void DrawInstanced(int count, int first, int instanceCount,
    int firstInstance) = 0;
  virtual void DrawIndexed(int count) = 0;
  virtual void DrawIndexed(int count, int firstIndex) = 0;
  virtual void Dispatch(int x, int y, int z) = 0;
  virtual void Execute(const CommandList* commands) = 0;
  virtual void FenceSync(Fence* fence) = 0;
  virtual void WaitSync(Fence* fence) = 0;
  virtual void PushDebugGroup(const char* name) = 0;
  virtual void PopDebugGroup() = 0;
};

}
