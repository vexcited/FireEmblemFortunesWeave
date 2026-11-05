#include "gxc/nvn/nvn_fence.hpp"

#include "gxc/nvn/nvn_device.hpp"

namespace gxc {

NvnSemaphore::NvnSemaphore() {
  nvnSyncInitialize(&sync_, GetNvnDevice(*this)->GetNative());
}

NvnSemaphore::~NvnSemaphore() {
  nvnSyncFinalize(&sync_);
}

Backend NvnSemaphore::GetBackend() const {
  return Backend::kNvn;
}

NvnFence::NvnFence() {
  nvnSyncInitialize(&sync_, GetNvnDevice(*this)->GetNative());
}

NvnFence::~NvnFence() {
  nvnSyncFinalize(&sync_);
}

Backend NvnFence::GetBackend() const {
  return Backend::kNvn;
}

int NvnFence::Wait(uint64_t timeout) {
  return nvnSyncWait(GetSync(), timeout);
}

}
