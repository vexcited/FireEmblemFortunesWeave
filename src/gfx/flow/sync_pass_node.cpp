#include <functional>
#include <string>
#include <vector>

// The gfx library is built with hidden visibility, so its own code reaches
// the PassNodeBase vtable directly while gfxa code goes through the GOT.
#pragma GCC visibility push(hidden)

#include "gfx/flow/sync_pass_node.hpp"

#include "gfx/flow/render_context.hpp"
#include "gfx/flow/resource.hpp"

namespace gfx::flow {

namespace {

SyncBeginCallback s_beginCallback;
SyncEndCallback s_endCallback;

}

void SetSyncCallbacks(const SyncBeginCallback& begin,
  const SyncEndCallback& end) {
  s_beginCallback = begin;
  s_endCallback = end;
}

void FenceSyncPassNode::Execute(gxc::RenderContext& context,
  void* userData) {
  if (s_beginCallback) {
    s_beginCallback(context, label_, userData);
  }

  context.GetCommandList()->FenceSync(
    static_cast<gxc::Fence*>(sync_->GetNative()));

  if (s_endCallback) {
    s_endCallback(context, userData);
  }
}

void WaitSyncPassNode::Execute(gxc::RenderContext& context,
  void* userData) {
  if (s_beginCallback) {
    s_beginCallback(context, label_, userData);
  }

  context.GetCommandList()->WaitSync(
    static_cast<gxc::Fence*>(sync_->GetNative()));

  if (s_endCallback) {
    s_endCallback(context, userData);
  }
}

}

#pragma GCC visibility pop
