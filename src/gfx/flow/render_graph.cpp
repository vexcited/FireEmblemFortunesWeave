#include <functional>
#include <string>
#include <vector>

// The gfx library is built with hidden visibility, so its own code reaches
// the PassNodeBase vtable directly while gfxa code goes through the GOT.
#pragma GCC visibility push(hidden)

#include "gfx/flow/render_graph.hpp"

#include "gfx/flow/render_context.hpp"
#include "gfx/flow/resource.hpp"
#include "gfx/flow/sync_pass_node.hpp"

namespace gfx::flow {

void RenderGraph::AddWaitSyncPass(const char* name, SyncResource* sync) {
  passes_.push_back(new WaitSyncPassNode(name, queue_, sync));
}

void RenderGraph::Execute(gxc::RenderContext* contexts, int contextCount,
  void* userData) {
  int index = 0;
  for (PassNodeBase* pass : order_) {
    for (Lifetime& lifetime : lifetimes_) {
      if (lifetime.first == index) {
        lifetime.resource->Acquire();
      }
    }

    if (pass->IsEnabled()) {
      contexts[pass->GetQueue()].GetCommandList()->InvalidateStateCache(
        0xffff);
      pass->Execute(contexts[pass->GetQueue()], userData);
    }

    for (Lifetime& lifetime : lifetimes_) {
      if (lifetime.last == index) {
        lifetime.resource->Release();
      }
    }

    ++index;
  }
}

}

#pragma GCC visibility pop
