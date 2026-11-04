#include "nn/crypto/detail/xts_mode_impl.hpp"

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

XtsModeImpl::~XtsModeImpl() {
  ClearMemoryImpl(this, sizeof(*this));
}

}
