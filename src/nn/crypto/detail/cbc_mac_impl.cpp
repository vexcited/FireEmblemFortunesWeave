#include "nn/crypto/detail/cbc_mac_impl.hpp"

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

CbcMacImpl::~CbcMacImpl() {
  ClearMemoryImpl(this, sizeof(*this));
}

}
