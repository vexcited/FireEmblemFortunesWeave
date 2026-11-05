#pragma once

#include <vector>

#include "gxc/command_list.hpp"
#include "gxc/gpu_memory_pool.hpp"
#include "gxc/nvn/nvn.hpp"

namespace gxc {

struct CommandListDesc {
  GpuMemoryPool* memoryPool;
  uint32_t flags;
  size_t commandMemorySize;
  size_t controlMemorySize;
  int blockCount;
};

class NvnCommandList final : public CommandList {
public:
  explicit NvnCommandList(const CommandListDesc& desc);
  ~NvnCommandList() override;

  Backend GetBackend() const override;
  uint32_t GetFlags() const override;
  void Begin() override;
  void End() override;
  void Transition(Resource* resource, ResourceState state) override;
  void Transition(const ResourceTransition* transitions,
    size_t count) override;
  void SetViewport(int x, int y, int width, int height) override;
  void SetViewport(int x, int y, int width, int height, float near,
    float far) override;
  void SetScissor(int x, int y, int width, int height) override;
  void SetRenderTarget(RenderTargetView color) override;
  void SetRenderTarget(RenderTargetView color,
    RenderTargetView depth) override;
  void SetDepthTarget(RenderTargetView depth) override;
  void SetRenderTargets(size_t count,
    const RenderTargetView* colors) override;
  void SetRenderTargets(size_t count, const RenderTargetView* colors,
    RenderTargetView depth) override;
  void Unknown17() override;
  void ClearColor(int index, const float* color) override;
  void ClearDepthStencil(float depth, int stencil,
    DepthStencilClear mode) override;
  void SetDescriptorPool(const DescriptorPool* pool) override;
  void SetDepthClamp(bool enable) override;
  void BindVertexBuffer(int index, uint64_t address, size_t size) override;
  void BindVertexBuffers(int first, const NVNbufferRange* ranges,
    int count) override;
  void SetIndexBuffer(uint64_t address, IndexType type) override;
  void BindProgram(uint32_t stages, const NVNprogram* program) override;
  void BindVertexState(const VertexState& state) override;
  void InvalidateStateCache(uint32_t flags) override;
  void BindUniformBuffer(uint32_t stages, int index, uint64_t address,
    size_t size) override;
  void BindStorageBuffer(uint32_t stages, int index, uint64_t address,
    size_t size) override;
  void BindTexelFetch(uint32_t stages, int index, const DescriptorPool* pool,
    int textureId) override;
  void BindTexture(uint32_t stages, int index, const DescriptorPool* pool,
    int textureId, int samplerId) override;
  void BindImage(uint32_t stages, int index, int imageId) override;
  void SetPrimitive(int primitive) override;
  void Draw(int count, int first) override;
  void DrawInstanced(int count, int first, int instanceCount,
    int firstInstance) override;
  void DrawIndexed(int count) override;
  void DrawIndexed(int count, int firstIndex) override;
  void Dispatch(int x, int y, int z) override;
  void Execute(const CommandList* commands) override;
  void FenceSync(Fence* fence) override;
  void WaitSync(Fence* fence) override;
  void PushDebugGroup(const char* name) override;
  void PopDebugGroup() override;

  NVNcommandHandle GetHandle() const {
    return handle_;
  }

  NVNcommandBuffer* GetNative() {
    return &buffer_;
  }

private:
  struct IndexBuffer {
    uint64_t address;
    IndexType type;
  };

  static void OnMemory(NVNcommandBuffer* buffer, int event, size_t minSize,
    void* userData);

  [[clang::always_inline]] bool AddCommandBlock();

  NVNcommandBuffer buffer_;
  NVNcommandHandle handle_ = 0;
  GpuMemoryPool* memoryPool_;
  int blockCount_;
  uint32_t flags_;
  GpuMemory commandMemory_;
  size_t commandMemorySize_ = 0;
  void* controlMemory_ = nullptr;
  size_t controlMemorySize_ = 0;
  std::vector<GpuMemory> commandBlocks_;
  std::vector<void*> controlBlocks_;
  int commandBlockIndex_ = 0;
  int controlBlockIndex_ = 0;
  IndexBuffer indexBuffer_ = {0, IndexType::kUnsignedInt};
  int primitive_;
  uint32_t programStages_ = 0;
  const NVNprogram* program_ = nullptr;
  const NVNvertexAttribState* attribs_ = nullptr;
  const NVNvertexStreamState* streams_ = nullptr;
  uint16_t vertexCounts_ = 0;
  size_t commandCapacity_ = 0;
  size_t controlCapacity_ = 0;
  size_t commandUsed_ = 0;
  size_t controlUsed_ = 0;
  size_t commandPeak_ = 0;
  size_t controlPeak_ = 0;
};

static_assert(sizeof(NvnCommandList) == 0x1b0);

}
