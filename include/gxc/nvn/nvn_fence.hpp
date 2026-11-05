#pragma once

#include "gxc/fence.hpp"
#include "gxc/nvn/nvn.hpp"

namespace gxc {

class NvnSemaphore final : public Semaphore {
public:
  NvnSemaphore();
  ~NvnSemaphore() override;

  Backend GetBackend() const override;

  NVNsync* GetSync() {
    return &sync_;
  }

private:
  NVNsync sync_;
};

class NvnFence final : public Fence {
public:
  NvnFence();
  ~NvnFence() override;

  Backend GetBackend() const override;
  int Wait(uint64_t timeout) override;

  // A fence can stand for the sync of a semaphore, as the swap chain does
  // when it acquires a texture.
  NVNsync* GetSync() {
    return external_ != nullptr ? external_ : &sync_;
  }

  void SetExternal(NVNsync* sync) {
    external_ = sync;
  }

private:
  NVNsync sync_;
  NVNsync* external_ = nullptr;
};

}
