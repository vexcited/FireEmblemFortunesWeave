#include "gxc/nvn/nvn_state_cache.hpp"

#include "gxc/nvn/nvn_command_list.hpp"

namespace gxc {

NvnStateCache::NvnStateCache() {}

NvnStateCache::~NvnStateCache() {}

int NvnStateCache::AddDepthStencilState(const NVNdepthStencilState& state) {
  int index = depthStencilStates_.size();
  depthStencilStates_.push_back(state);
  return index;
}

int NvnStateCache::AddBlendState(const BlendStateSet& state) {
  int index = blendStates_.size();
  blendStates_.push_back(state);
  return index;
}

int NvnStateCache::AddPolygonState(const NVNpolygonState& state) {
  int index = polygonStates_.size();
  polygonStates_.push_back(state);
  return index;
}

int NvnStateCache::AddMultisampleState(const NVNmultisampleState& state) {
  int index = multisampleStates_.size();
  multisampleStates_.push_back(state);
  return index;
}

void NvnStateCache::Reset() {
  depthStencilState_ = -1;
  blendState_ = -1;
  polygonState_ = -1;
  multisampleState_ = -1;
}

void NvnStateCache::SetCommandList(NvnCommandList* commandList) {
  commandList_ = commandList;
}

void NvnStateCache::ClearCommandList() {
  commandList_ = nullptr;
}

void NvnStateCache::BindDepthStencilState(int index) {
  if ((locks_ & kLockDepthStencil) != 0 || depthStencilState_ == index) {
    return;
  }

  nvnCommandBufferBindDepthStencilState(commandList_->GetNative(),
    &depthStencilStates_[index]);
  depthStencilState_ = index;
}

void NvnStateCache::LockDepthStencilState() {
  locks_ |= kLockDepthStencil;
}

void NvnStateCache::UnlockDepthStencilState() {
  locks_ &= ~kLockDepthStencil;
}

void NvnStateCache::BindBlendState(int index) {
  if ((locks_ & kLockBlend) != 0 || blendState_ == index) {
    return;
  }

  NVNcommandBuffer* buffer = commandList_->GetNative();
  const BlendStateSet& state = blendStates_[index];
  for (int i = 0; i < state.count; i++) {
    nvnCommandBufferBindBlendState(buffer, &state.blends[i]);
  }

  nvnCommandBufferBindChannelMaskState(buffer, &state.channelMask);
  nvnCommandBufferBindColorState(buffer, &state.color);
  blendState_ = index;
}

void NvnStateCache::LockBlendState() {
  locks_ |= kLockBlend;
}

void NvnStateCache::UnlockBlendState() {
  locks_ &= ~kLockBlend;
}

void NvnStateCache::BindPolygonState(int index) {
  if ((locks_ & kLockPolygon) != 0 || polygonState_ == index) {
    return;
  }

  nvnCommandBufferBindPolygonState(commandList_->GetNative(),
    &polygonStates_[index]);
  polygonState_ = index;
}

void NvnStateCache::LockPolygonState() {
  locks_ |= kLockPolygon;
}

void NvnStateCache::UnlockPolygonState() {
  locks_ &= ~kLockPolygon;
}

void NvnStateCache::BindMultisampleState(int index) {
  if ((locks_ & kLockMultisample) != 0 || multisampleState_ == index) {
    return;
  }

  nvnCommandBufferBindMultisampleState(commandList_->GetNative(),
    &multisampleStates_[index]);
  multisampleState_ = index;
}

void NvnStateCache::UnlockAll() {
  locks_ &= ~0xffULL;
}

void NvnStateCache::CopyLocks(const NvnStateCache& other) {
  locks_ = other.locks_;
}

}
