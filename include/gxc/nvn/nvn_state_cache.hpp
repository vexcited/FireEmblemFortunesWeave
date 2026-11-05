#pragma once

#include <cstdint>
#include <vector>

#include "gxc/nvn/nvn.hpp"

namespace gxc {

class NvnCommandList;

struct BlendStateSet {
  int count;
  NVNblendState blends[8];
  NVNcolorState color;
  NVNchannelMaskState channelMask;
};

// Render states registered once and bound by index, a bind is skipped when
// the state is already bound or its kind is locked.
class NvnStateCache {
public:
  enum LockBits : uint64_t {
    kLockDepthStencil = 1,
    kLockBlend = 2,
    kLockPolygon = 4,
    kLockMultisample = 8,
  };

  NvnStateCache();
  ~NvnStateCache();

  int AddDepthStencilState(const NVNdepthStencilState& state);
  int AddBlendState(const BlendStateSet& state);
  int AddPolygonState(const NVNpolygonState& state);
  int AddMultisampleState(const NVNmultisampleState& state);

  void Reset();
  void SetCommandList(NvnCommandList* commandList);
  void ClearCommandList();

  void BindDepthStencilState(int index);
  void LockDepthStencilState();
  void UnlockDepthStencilState();
  void BindBlendState(int index);
  void LockBlendState();
  void UnlockBlendState();
  void BindPolygonState(int index);
  void LockPolygonState();
  void UnlockPolygonState();
  void BindMultisampleState(int index);
  void UnlockAll();
  void CopyLocks(const NvnStateCache& other);

private:
  NvnCommandList* commandList_ = nullptr;
  uint64_t locks_ = 0;
  std::vector<NVNdepthStencilState> depthStencilStates_;
  std::vector<BlendStateSet> blendStates_;
  std::vector<NVNpolygonState> polygonStates_;
  std::vector<NVNmultisampleState> multisampleStates_;
  int depthStencilState_ = -1;
  int blendState_ = -1;
  int polygonState_ = -1;
  int multisampleState_ = -1;
};

static_assert(sizeof(NvnStateCache) == 0x80);

}
