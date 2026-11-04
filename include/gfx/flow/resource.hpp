#pragma once

#include <string>

namespace gfx::flow {

// Only the members the pass nodes and the render graph rely on are listed.
class ResourceBase {
public:
  virtual ~ResourceBase() = default;

  virtual void* GetNative() const {
    return nullptr;
  }

  virtual void Acquire() = 0;
  virtual void Release() = 0;

protected:
  std::string name_;
};

class SyncResource : public ResourceBase {
public:
  // Returns the gxc::Fence acquired from the shared fence pool.
  void* GetNative() const override;
  void Acquire() override;
  void Release() override;
};

}
