#include <stddef.h>

namespace nn::diag {

enum AssertionType : int;
struct LogMetaData;

namespace detail {

void OnAssertionFailure(AssertionType type);
void PutImpl(const LogMetaData& metaData, const char* text, size_t length);

}

}

extern "C" {

void nndetailDiagOnAssertionFailureNoMessage(nn::diag::AssertionType type) {
  nn::diag::detail::OnAssertionFailure(type);
}

void nndetailDiagPutImplForC(const nn::diag::LogMetaData* metaData,
  const char* text, size_t length) {
  nn::diag::detail::PutImpl(*metaData, text, length);
}

}
