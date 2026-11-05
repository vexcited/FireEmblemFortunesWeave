#include "gxc/nvn/nvn_command_list.hpp"

#include <algorithm>

#include "gxc/descriptor_pool.hpp"
#include "gxc/fence.hpp"
#include "gxc/memory.hpp"
#include "gxc/nvn/nvn_descriptor_pool.hpp"
#include "gxc/nvn/nvn_device.hpp"
#include "gxc/nvn/nvn_fence.hpp"
#include "nn/diag/unexpected_default.hpp"

namespace gxc {

namespace {

constexpr int kCommandMemoryAlignment = 19;
constexpr int kControlMemoryAlignment = 20;

constexpr uint32_t kDebugDomain = 'g' << 16 | 'x' << 8 | 'c';

constexpr int kStageIndices[] = {0, 1, 2, 5};

int GetBarrier(ResourceState from, ResourceState to) {
  int barrier;
  switch (from) {
    case ResourceState::kRenderTarget:
      barrier = 2;
      break;
    case ResourceState::kStorage:
      barrier = 1;
      break;
    case ResourceState::kDepthTarget:
      barrier = 0x21;
      break;
    default:
      barrier = 0;
      break;
  }

  if (to == ResourceState::kCopyDestination) {
    barrier |= 0x10;
  }

  return barrier;
}

}

NvnCommandList::NvnCommandList(const CommandListDesc& desc)
  : memoryPool_(desc.memoryPool), blockCount_(desc.blockCount),
    flags_(desc.flags) {
  NvnDevice* device = GetNvnDevice(*this);
  nvnCommandBufferInitialize(&buffer_, device->GetNative());
  nvnCommandBufferSetMemoryCallback(&buffer_, OnMemory);
  nvnCommandBufferSetMemoryCallbackData(&buffer_, this);

  commandMemorySize_ = desc.commandMemorySize;
  commandMemory_ = memoryPool_->AllocateMemory(commandMemorySize_,
    device->GetInteger(kCommandMemoryAlignment));

  controlMemorySize_ = desc.controlMemorySize;
  controlMemory_ = Allocate(controlMemorySize_,
    device->GetInteger(kControlMemoryAlignment));

  if (blockCount_ > 0) {
    commandBlocks_.resize(blockCount_);
    controlBlocks_.resize(blockCount_, nullptr);
  }

  if (flags_ & 1) {
    nvnCommandBufferSetRecordingMode(&buffer_, 0);
  }
  else if (flags_ & 2) {
    nvnCommandBufferSetRecordingMode(&buffer_, 1);
  }
  else if (flags_ & 4) {
    nvnCommandBufferSetRecordingMode(&buffer_, 2);
  }

  Begin();
  handle_ = nvnCommandBufferEndRecording(&buffer_);
}

NvnCommandList::~NvnCommandList() {
  if (handle_ != 0) {
    nvnDeviceFinalizeCommandHandle(GetNvnDevice(*this)->GetNative(),
      handle_);
    handle_ = 0;
  }

  nvnCommandBufferFinalize(&buffer_);

  for (void* block : controlBlocks_) {
    Free(block);
  }

  controlBlocks_.clear();
  commandBlocks_.clear();
  Free(controlMemory_);
}

Backend NvnCommandList::GetBackend() const {
  return Backend::kNvn;
}

uint32_t NvnCommandList::GetFlags() const {
  return flags_;
}

void NvnCommandList::Begin() {
  commandCapacity_ = commandMemorySize_;
  controlCapacity_ = controlMemorySize_;
  commandUsed_ = nvnCommandBufferGetCommandMemoryUsed(&buffer_);
  controlUsed_ = nvnCommandBufferGetControlMemoryUsed(&buffer_);

  for (const GpuMemory& block : commandBlocks_) {
    if (!block.IsValid()) {
      break;
    }

    commandCapacity_ += commandMemorySize_;
  }

  for (void* block : controlBlocks_) {
    if (block == nullptr) {
      break;
    }

    controlCapacity_ += controlMemorySize_;
  }

  indexBuffer_.type = IndexType::kUnsignedInt;
  commandUsed_ += commandMemorySize_ * commandBlockIndex_;
  controlUsed_ += controlMemorySize_ * controlBlockIndex_;
  commandBlockIndex_ = 0;
  controlBlockIndex_ = 0;
  indexBuffer_.address = 0;
  commandPeak_ = std::max(commandPeak_, commandUsed_);
  controlPeak_ = std::max(controlPeak_, controlUsed_);

  programStages_ = 0;
  program_ = nullptr;
  attribs_ = nullptr;
  streams_ = nullptr;
  vertexCounts_ = 0;

  nvnCommandBufferAddCommandMemory(&buffer_, commandMemory_.GetPool(),
    commandMemory_.GetOffset(), commandMemorySize_);
  nvnCommandBufferAddControlMemory(&buffer_, controlMemory_,
    controlMemorySize_);
  if (handle_ != 0) {
    nvnDeviceFinalizeCommandHandle(GetNvnDevice(*this)->GetNative(),
      handle_);
    handle_ = 0;
  }

  nvnCommandBufferBeginRecording(&buffer_);
}

void NvnCommandList::End() {
  handle_ = nvnCommandBufferEndRecording(&buffer_);
}

void NvnCommandList::Transition(Resource* resource, ResourceState state) {
  ResourceState current = resource->GetState();
  if (current == state) {
    return;
  }

  int barrier = GetBarrier(current, state);
  if (barrier != 0) {
    nvnCommandBufferBarrier(&buffer_, barrier);
  }

  resource->SetState(state);
}

void NvnCommandList::Transition(const ResourceTransition* transitions,
  size_t count) {
  if (count == 0) {
    return;
  }

  int barrier = 0;
  for (size_t i = 0; i < count; i++) {
    ResourceState current = transitions[i].resource->GetState();
    if (current != transitions[i].state) {
      barrier |= GetBarrier(current, transitions[i].state);
    }
  }

  if (barrier != 0) {
    nvnCommandBufferBarrier(&buffer_, barrier);
  }

  for (size_t i = 0; i < count; i++) {
    transitions[i].resource->SetState(transitions[i].state);
  }
}

void NvnCommandList::SetViewport(int x, int y, int width, int height) {
  nvnCommandBufferSetViewport(&buffer_, x, y, width, height);
  nvnCommandBufferSetDepthRange(&buffer_, 0.0f, 1.0f);
}

void NvnCommandList::SetViewport(int x, int y, int width, int height,
  float near, float far) {
  nvnCommandBufferSetViewport(&buffer_, x, y, width, height);
  nvnCommandBufferSetDepthRange(&buffer_, near, far);
}

void NvnCommandList::SetScissor(int x, int y, int width, int height) {
  nvnCommandBufferSetScissor(&buffer_, x, y, width, height);
}

void NvnCommandList::SetRenderTarget(RenderTargetView color) {
  nvnCommandBufferSetRenderTargets(&buffer_, 1, &color.texture,
    &color.view, nullptr, nullptr);
}

void NvnCommandList::SetRenderTarget(RenderTargetView color,
  RenderTargetView depth) {
  nvnCommandBufferSetRenderTargets(&buffer_, 1, &color.texture,
    &color.view, depth.texture, depth.view);
}

void NvnCommandList::SetDepthTarget(RenderTargetView depth) {
  nvnCommandBufferSetRenderTargets(&buffer_, 0, nullptr, nullptr,
    depth.texture, depth.view);
}

void NvnCommandList::SetRenderTargets(size_t count,
  const RenderTargetView* colors) {
  const NVNtexture* textures[8] = {};
  const NVNtextureView* views[8] = {};
  for (unsigned i = 0; i < count; i++) {
    textures[i] = colors[i].texture;
    views[i] = colors[i].view;
  }

  nvnCommandBufferSetRenderTargets(&buffer_, count, textures, views,
    nullptr, nullptr);
}

void NvnCommandList::SetRenderTargets(size_t count,
  const RenderTargetView* colors, RenderTargetView depth) {
  const NVNtexture* textures[8] = {};
  const NVNtextureView* views[8] = {};
  for (unsigned i = 0; i < count; i++) {
    textures[i] = colors[i].texture;
    views[i] = colors[i].view;
  }

  nvnCommandBufferSetRenderTargets(&buffer_, count, textures, views,
    depth.texture, depth.view);
}

void NvnCommandList::Unknown17() {}

void NvnCommandList::ClearColor(int index, const float* color) {
  nvnCommandBufferClearColor(&buffer_, index, color, 15);
}

void NvnCommandList::ClearDepthStencil(float depth, int stencil,
  DepthStencilClear mode) {
  bool clearDepth = mode == DepthStencilClear::kDepth ||
    mode == DepthStencilClear::kDepthStencil;
  bool clearStencil = mode == DepthStencilClear::kStencil ||
    mode == DepthStencilClear::kDepthStencil;
  nvnCommandBufferClearDepthStencil(&buffer_, depth, clearDepth,
    stencil, clearStencil ? 0xff : 0);
}

void NvnCommandList::SetDescriptorPool(const DescriptorPool* pool) {
  const NvnDescriptorPool* nvn = static_cast<const NvnDescriptorPool*>(pool);
  nvnCommandBufferSetTexturePool(&buffer_, nvn->GetTexturePool());
  nvnCommandBufferSetSamplerPool(&buffer_, nvn->GetSamplerPool());
}

void NvnCommandList::SetDepthClamp(bool enable) {
  nvnCommandBufferSetDepthClamp(&buffer_, enable);
}

void NvnCommandList::BindVertexBuffer(int index, uint64_t address,
  size_t size) {
  nvnCommandBufferBindVertexBuffer(&buffer_, index, address, size);
}

void NvnCommandList::BindVertexBuffers(int first,
  const NVNbufferRange* ranges, int count) {
  nvnCommandBufferBindVertexBuffers(&buffer_, first, count, ranges);
}

void NvnCommandList::SetIndexBuffer(uint64_t address, IndexType type) {
  indexBuffer_.address = address;
  indexBuffer_.type = type;
}

void NvnCommandList::BindProgram(uint32_t stages,
  const NVNprogram* program) {
  if (programStages_ == stages && program_ == program) {
    return;
  }

  int bits = (stages & 7) | ((stages & kStageCompute) != 0 ? 0x20 : 0);
  nvnCommandBufferBindProgram(&buffer_, program, bits);
  programStages_ = stages;
  program_ = program;
}

void NvnCommandList::BindVertexState(const VertexState& state) {
  if (attribs_ == state.attribs && streams_ == state.streams &&
      vertexCounts_ == state.counts) {
    return;
  }

  uint16_t counts = state.counts;
  nvnCommandBufferBindVertexAttribState(&buffer_, counts >> 8,
    state.attribs);
  nvnCommandBufferBindVertexStreamState(&buffer_, counts & 0xff,
    state.streams);
  attribs_ = state.attribs;
  streams_ = state.streams;
  vertexCounts_ = state.counts;
}

void NvnCommandList::InvalidateStateCache(uint32_t flags) {
  if (flags & kStateCacheProgram) {
    program_ = nullptr;
    programStages_ = 0;
  }

  if (flags & kStateCacheVertex) {
    vertexCounts_ = 0;
    attribs_ = nullptr;
    streams_ = nullptr;
  }
}

void NvnCommandList::BindUniformBuffer(uint32_t stages, int index,
  uint64_t address, size_t size) {
  for (int i = 0; i < 4; i++) {
    if (stages & 1 << i) {
      nvnCommandBufferBindUniformBuffer(&buffer_, kStageIndices[i],
        index, address, size);
    }
  }
}

void NvnCommandList::BindStorageBuffer(uint32_t stages, int index,
  uint64_t address, size_t size) {
  for (int i = 0; i < 4; i++) {
    if (stages & 1 << i) {
      nvnCommandBufferBindStorageBuffer(&buffer_, kStageIndices[i],
        index, address, size);
    }
  }
}

void NvnCommandList::BindTexelFetch(uint32_t stages, int index,
  const DescriptorPool*, int textureId) {
  NVNtextureHandle handle = nvnDeviceGetTexelFetchHandle(
    GetNvnDevice(*this)->GetNative(), textureId);
  for (int i = 0; i < 4; i++) {
    if (stages & 1 << i) {
      nvnCommandBufferBindTexture(&buffer_, kStageIndices[i], index,
        handle);
    }
  }
}

void NvnCommandList::BindTexture(uint32_t stages, int index,
  const DescriptorPool*, int textureId, int samplerId) {
  NVNtextureHandle handle = nvnDeviceGetTextureHandle(
    GetNvnDevice(*this)->GetNative(), textureId, samplerId);
  for (int i = 0; i < 4; i++) {
    if (stages & 1 << i) {
      nvnCommandBufferBindTexture(&buffer_, kStageIndices[i], index,
        handle);
    }
  }
}

void NvnCommandList::BindImage(uint32_t stages, int index, int imageId) {
  NVNimageHandle handle = nvnDeviceGetImageHandle(
    GetNvnDevice(*this)->GetNative(), imageId);
  for (int i = 0; i < 4; i++) {
    if (stages & 1 << i) {
      nvnCommandBufferBindImage(&buffer_, kStageIndices[i], index,
        handle);
    }
  }
}

void NvnCommandList::SetPrimitive(int primitive) {
  static constexpr int kPrimitives[] = {1, 4, 5};
  if (static_cast<unsigned>(primitive) <= 2) {
    primitive_ = kPrimitives[primitive];
  }
}

void NvnCommandList::Draw(int count, int first) {
  nvnCommandBufferDrawArrays(&buffer_, primitive_, first, count);
}

void NvnCommandList::DrawInstanced(int count, int first, int instanceCount,
  int firstInstance) {
  nvnCommandBufferDrawArraysInstanced(&buffer_, primitive_, first,
    count, firstInstance, instanceCount);
}

void NvnCommandList::DrawIndexed(int count) {
  nvnCommandBufferDrawElements(&buffer_, primitive_,
    static_cast<int>(indexBuffer_.type), count, indexBuffer_.address);
}

void NvnCommandList::DrawIndexed(int count, int firstIndex) {
  uint64_t address = indexBuffer_.address;
  switch (indexBuffer_.type) {
    case IndexType::kUnsignedByte:
      address += firstIndex;
      break;
    case IndexType::kUnsignedShort:
      address += firstIndex * 2LL;
      break;
    case IndexType::kUnsignedInt:
      address += firstIndex * 4LL;
      break;
  }

  nvnCommandBufferDrawElements(&buffer_, primitive_,
    static_cast<int>(indexBuffer_.type), count, address);
}

void NvnCommandList::Dispatch(int x, int y, int z) {
  nvnCommandBufferDispatchCompute(&buffer_, x, y, z);
}

void NvnCommandList::Execute(const CommandList* commands) {
  NVNcommandHandle handle =
    static_cast<const NvnCommandList*>(commands)->handle_;
  nvnCommandBufferCallCommands(&buffer_, 1, &handle);
}

void NvnCommandList::FenceSync(Fence* fence) {
  nvnCommandBufferFenceSync(&buffer_,
    static_cast<NvnFence*>(fence)->GetSync(), 0, 0);
}

void NvnCommandList::WaitSync(Fence* fence) {
  nvnCommandBufferWaitSync(&buffer_,
    static_cast<NvnFence*>(fence)->GetSync());
}

void NvnCommandList::PushDebugGroup(const char* name) {
  nvnCommandBufferPushDebugGroup(&buffer_, kDebugDomain, name);
}

void NvnCommandList::PopDebugGroup() {
  nvnCommandBufferPopDebugGroup(&buffer_, kDebugDomain);
}

void NvnCommandList::OnMemory(NVNcommandBuffer*, int event, size_t,
  void* userData) {
  NvnCommandList* list = static_cast<NvnCommandList*>(userData);
  switch (event) {
    case 0:
      list->AddCommandBlock();
      return;
    case 1: {
      int index = list->controlBlockIndex_++;
      if (index >= list->blockCount_) {
        return;
      }

      if (list->controlBlocks_[index] == nullptr) {
        size_t alignment =
          GetNvnDevice(*list)->GetInteger(kControlMemoryAlignment);
        list->controlBlocks_[index] = Allocate(list->controlMemorySize_,
          alignment);
      }

      nvnCommandBufferAddControlMemory(&list->buffer_,
        list->controlBlocks_[index], list->controlMemorySize_);
      return;
    }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

bool NvnCommandList::AddCommandBlock() {
  int index = commandBlockIndex_++;
  int count = blockCount_;
  if (index < count) {
    if (!commandBlocks_[index].IsValid()) {
      commandBlocks_[index] = memoryPool_->AllocateMemory(commandMemorySize_,
        GetNvnDevice(*this)->GetInteger(kCommandMemoryAlignment));
    }

    nvnCommandBufferAddCommandMemory(&buffer_,
      commandBlocks_[index].GetPool(), commandBlocks_[index].GetOffset(),
      commandMemorySize_);
  }

  return index < count;
}

}
