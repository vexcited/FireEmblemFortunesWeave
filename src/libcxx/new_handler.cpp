#include "libcxx/allocation.hpp"

namespace fw::libcxx {

NewHandler GetNewHandler() {
  return __atomic_load_n(&NewHandlerSlot, __ATOMIC_ACQUIRE);
}

NewHandler SetNewHandler(NewHandler handler) {
  return __atomic_exchange_n(&NewHandlerSlot, handler, __ATOMIC_ACQ_REL);
}

}
