#include "nn/sf/service_object.hpp"

namespace nn::sf::impl::detail {

[[noreturn]] void AbortReferenceCount() asm("_ZN2nn4diag6detail9AbortImplEv");

void ServiceObjectImplBase2::AddReferenceImpl() {
  uint32_t previous = __atomic_fetch_add(&references, 1, __ATOMIC_ACQ_REL);

  if (previous == UINT32_MAX) {
    AbortReferenceCount();
  }
}

bool ServiceObjectImplBase2::ReleaseImpl() {
  uint32_t previous = __atomic_fetch_sub(&references, 1, __ATOMIC_ACQ_REL);

  if (!previous) {
    AbortReferenceCount();
  }

  return previous == 1;
}

}
