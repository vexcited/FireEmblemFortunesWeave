#pragma once

#include <atomic>
#include <stddef.h>

#include "nn/applet/applet_types.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::hid::detail {

class SharedMemoryAccessor {
 public:
  SharedMemoryAccessor();
  virtual ~SharedMemoryAccessor();
  virtual Result Activate();
  virtual Result Deactivate();
  virtual Result Attach(void* address) = 0;
  virtual Result Detach() = 0;

  Result SetAppletResourceUserId(applet::AppletResourceUserId aruid);
  void SetResultActivationUpperLimitOver(Result result);
  void SetResultDeactivationLowerLimitOver(Result result);

 private:
  int m_ActivationCount;
  os::SdkMutexType m_Mutex;
  Result m_ResultActivationUpperLimitOver;
  Result m_ResultDeactivationLowerLimitOver;
};

// Derived accessors provide ActivateServer and DeactivateServer, which tell
// the hid service to start or stop updating their shared memory region.
template <typename Derived, typename Lifo, size_t Offset>
class LifoSharedMemoryAccessor : public SharedMemoryAccessor {
 public:
  Result Attach(void* address) override {
    NN_RESULT_DO(Derived::ActivateServer());
    m_pLifo.store(reinterpret_cast<Lifo*>(static_cast<uint8_t*>(address) +
      Offset), std::memory_order_release);
    return Result{};
  }

  Result Detach() override {
    NN_RESULT_DO(Derived::DeactivateServer());
    m_pLifo.store(nullptr, std::memory_order_release);
    return Result{};
  }

  const Lifo* GetLifo() const {
    return m_pLifo.load(std::memory_order_acquire);
  }

 protected:
  LifoSharedMemoryAccessor() : m_pLifo(nullptr) {}

 private:
  std::atomic<Lifo*> m_pLifo;
};

}
