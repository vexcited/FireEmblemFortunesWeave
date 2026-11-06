#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/sf/cmif/client/cmif_client_message.hpp"

namespace nn::sf::hipc::detail {

// Copy handles are only copied, move handles must be managed and are moved
// out of the array.
Result SetHandles(Hipc2MessageWriter* pWriter, int count,
  NativeHandle* pHandles, const uint32_t* pAttributes) {
  int copyIndex = 0;
  int moveIndex = 0;
  for (int i = 0; i < count; i++) {
    const uint32_t attribute = pAttributes[i];
    if (attribute & 1) {
      uint32_t* words = static_cast<uint32_t*>(pWriter->buffer);
      words[pWriter->pInfo->copyHandleOffset + copyIndex++] =
        pHandles[i].GetOsHandle();
    }
    else if (attribute & 2) {
      NN_ABORT_UNLESS(pHandles[i].IsManaged());
      uint32_t* words = static_cast<uint32_t*>(pWriter->buffer);
      words[pWriter->pInfo->moveHandleOffset + moveIndex++] =
        pHandles[i].GetOsHandle();
      pHandles[i].Detach();
    }
    else {
      return Result{0x20b};
    }
  }
  return Result{0};
}

}
