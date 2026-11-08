#include <stdarg.h>

#include "nn/result.hpp"

namespace nn::diag {

struct LogMetaData;

namespace detail {

[[noreturn]] void AbortImpl(const char* condition, const char* function,
  const char* file, int line, const char* format, ...);
void VLogImpl(const LogMetaData& metaData, const char* format,
  va_list arguments);

}

}

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl(const char* function,
  const char* file, int line);

[[noreturn]] void UnexpectedDefaultImpl() {
  UnexpectedDefaultImpl("", "", 0);
}

}

extern "C" {

[[noreturn]] void nndetailUnexpectedDefaultImpl(const char* function,
  const char* file, int line) {
  nn::diag::detail::AbortImpl("", function, file, line, "");
}

[[noreturn]] void nndetailDiagAbortImpl(const char* condition,
  const char* function, const char* file, int line) {
  nn::diag::detail::AbortImpl(condition, function, file, line, "");
}

[[noreturn]] void nndetailDiagAbortNoMessageImpl() {
  nn::diag::detail::AbortImpl("", "", "", 0, "");
}

[[noreturn]] void nndiagAbort() {
  nn::diag::detail::AbortImpl("", "", "", 0, "");
}

void nndetailDiagVLogImplForC(const nn::diag::LogMetaData* metaData,
  const char* format, va_list arguments) {
  nn::diag::detail::VLogImpl(*metaData, format, arguments);
}

}
