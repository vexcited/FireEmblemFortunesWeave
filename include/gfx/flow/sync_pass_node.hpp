#pragma once

#include <functional>

#include "gfx/flow/pass_node.hpp"
#include "gfx/flow/resource.hpp"

namespace gfx::flow {

using SyncBeginCallback =
  std::function<void(gxc::RenderContext&, const char*, void*)>;
using SyncEndCallback = std::function<void(gxc::RenderContext&, void*)>;

// Both callbacks wrap every fence and wait command, presumably for GPU
// debug markers.
void SetSyncCallbacks(const SyncBeginCallback& begin,
  const SyncEndCallback& end);

class FenceSyncPassNode final : public PassNodeBase {
public:
  FenceSyncPassNode(const char* name, int queue, SyncResource* sync)
    : PassNodeBase(name, queue), sync_(sync), label_(name) {
    creates_.push_back(sync);
  }

  void Build(ResourceBuilder& builder) override {}
  void Execute(gxc::RenderContext& context, void* userData) override;

private:
  SyncResource* sync_;
  const char* label_;
};

class WaitSyncPassNode final : public PassNodeBase {
public:
  WaitSyncPassNode(const char* name, int queue, SyncResource* sync)
    : PassNodeBase(name, queue), sync_(sync), label_(name) {
    uses_.push_back(sync);
  }

  void Build(ResourceBuilder& builder) override {}
  void Execute(gxc::RenderContext& context, void* userData) override;

private:
  SyncResource* sync_;
  const char* label_;
};

}
