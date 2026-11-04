#pragma once

#include <functional>
#include <string>
#include <utility>
#include <vector>

namespace gxc {
class RenderContext;
}

namespace gfx::flow {

class RenderGraph;
class ResourceBase;
class ResourceBuilder;

class PassNodeBase {
public:
  PassNodeBase(const char* name, int queue)
    : name_(name), queue_(queue), enabled_(true) {}

  virtual ~PassNodeBase() = default;

  virtual void Build(ResourceBuilder& builder) = 0;
  virtual void Execute(gxc::RenderContext& context, void* userData) = 0;

  const std::string& GetName() const {
    return name_;
  }

  int GetQueue() const {
    return queue_;
  }

  bool IsEnabled() const {
    return enabled_;
  }

protected:
  friend class ResourceBuilder;

  std::string name_;

  // A fence pass lists the sync resource it creates here.
  std::vector<ResourceBase*> creates_;

  // ResourceBuilder and wait passes append the resources they use here.
  std::vector<ResourceBase*> uses_;

  // Index of the render context the pass records into.
  int queue_;
  bool enabled_;
};

// Pass data members start inside the base tail padding, so an empty input
// lands at offset 0x55.
template<typename In, typename Out>
class __attribute__((visibility("hidden"))) PassNode final
  : public PassNodeBase {
public:
  struct BuildArgs {
    In& input;
    Out& output;
  };

  struct ExecuteArgs {
    const In& input;
    const Out& output;
    const std::string& name;
    void* userData;
  };

  using BuildFunc = std::function<void(const BuildArgs&, ResourceBuilder&)>;
  using ExecuteFunc =
    std::function<void(const ExecuteArgs&, gxc::RenderContext&)>;

  template<typename B, typename E>
  PassNode(const char* name, int queue, B&& build, E&& execute)
    : PassNodeBase(name, queue),
      build_(std::forward<B>(build)),
      execute_(std::forward<E>(execute)) {}

  void Build(ResourceBuilder& builder) override {
    build_(BuildArgs{input_, output_}, builder);
  }

  void Execute(gxc::RenderContext& context, void* userData) override {
    execute_(ExecuteArgs{input_, output_, name_, userData}, context);
  }

  In& GetInput() {
    return input_;
  }

  Out& GetOutput() {
    return output_;
  }

private:
  In input_{};
  Out output_{};
  BuildFunc build_;
  ExecuteFunc execute_;
};

}
