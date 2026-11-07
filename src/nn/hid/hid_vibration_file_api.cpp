#include "nn/diag/diag_abort.hpp"
#include "nn/hid/hid_vibration_node.hpp"

namespace nn::hid {

namespace detail {

struct VibrationFileParserContextImpl {
  const uint8_t* pData;
  int32_t reserved;
  int32_t sampleLength;
};

Result ParseVibrationFile(VibrationFileInfo* pOutInfo,
  VibrationFileParserContextImpl* pOutContext, const void* address,
  size_t size);
Result RetrieveVibrationValue(VibrationValue* pOutValue, int position,
  VibrationFileParserContextImpl* pContext);

}

Result ParseVibrationFile(VibrationFileInfo* pOutInfo,
  VibrationFileParserContext* pOutContext, const void* address, size_t size) {
  NN_ABORT_UNLESS_NOT_NULL(pOutInfo);
  NN_ABORT_UNLESS_NOT_NULL(pOutContext);
  NN_ABORT_UNLESS_NOT_NULL(address);
  NN_ABORT_UNLESS(size > 0);
  return detail::ParseVibrationFile(pOutInfo,
    reinterpret_cast<detail::VibrationFileParserContextImpl*>(pOutContext),
    address, size);
}

void RetrieveVibrationValue(VibrationValue* pOutValue, int position,
  VibrationFileParserContext* pContext) {
  NN_ABORT_UNLESS_NOT_NULL(pOutValue);
  NN_ABORT_UNLESS_NOT_NULL(pContext);
  auto* pImpl =
    reinterpret_cast<detail::VibrationFileParserContextImpl*>(pContext);
  NN_ABORT_UNLESS_NOT_NULL(pImpl->pData);
  NN_ABORT_UNLESS(position >= 0 && position < pImpl->sampleLength);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::RetrieveVibrationValue(pOutValue, position, pImpl));
}

}
