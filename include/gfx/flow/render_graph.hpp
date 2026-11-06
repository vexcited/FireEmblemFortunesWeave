#pragma once

#include <string_view>
#include <utility>
#include <vector>

#include "gfx/flow/pass_node.hpp"

namespace gfx::flow {

class SyncResource;

class ResourceBuilder {
public:
  ResourceBuilder(RenderGraph& graph, PassNodeBase& pass)
    : graph_(&graph), pass_(&pass) {}

  template<typename T>
  T* Use(T* resource) {
    pass_->uses_.push_back(resource);
    return resource;
  }

  // The graph owns the new resource, the pass records that it creates it.
  template<typename T, typename D>
  T* Create(const char* name, const D& desc);

private:
  RenderGraph* graph_;
  PassNodeBase* pass_;
};

class RenderGraph {
public:
  template<typename In, typename Out, typename B, typename E>
  Out& AddPass(const char* name, B&& build, E&& execute) {
    auto* pass = new PassNode<In, Out>(name, queue_, std::forward<B>(build),
      std::forward<E>(execute));
    passes_.push_back(pass);

    ResourceBuilder builder(*this, *passes_.back());
    passes_.back()->Build(builder);
    return pass->GetOutput();
  }

  template<typename T, typename D>
  T* CreateResource(std::string_view name, const D& desc);

  SyncResource* AddFenceSyncPass(const char* name, int pool);
  void AddWaitSyncPass(const char* name, SyncResource* sync);

  void Execute(gxc::RenderContext* contexts, int contextCount,
    void* userData);

private:
  struct Lifetime {
    ResourceBase* resource;
    int first;
    int last;
  };

  std::vector<PassNodeBase*> passes_;
  std::vector<ResourceBase*> resources_;
  std::vector<PassNodeBase*> order_;
  std::vector<Lifetime> lifetimes_;
  int queue_;
};

template<typename T, typename D>
T* ResourceBuilder::Create(const char* name, const D& desc) {
  T* resource = graph_->CreateResource<T>(name, desc);
  pass_->creates_.push_back(resource);
  return resource;
}

}
