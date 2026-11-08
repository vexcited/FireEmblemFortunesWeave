#include <stdint.h>

namespace nn::lm::detail {

void TransmitHashedLogForSystem(const void* pData, uint32_t size);

}

namespace nn::diag::detail {

void HashedLogPostSerializeProcess_hlog(const void* pData, uint32_t size) {
  lm::detail::TransmitHashedLogForSystem(pData, size);
}

}
