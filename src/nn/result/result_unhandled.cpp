#include "nn/diag/diag_abort.hpp"
#include "nn/result.hpp"

namespace nn::result::detail {

[[gnu::visibility("hidden")]] void ReportUnhandledResult(
  const Result* pResult);

[[noreturn]] void OnUnhandledResult(Result result) {
  ReportUnhandledResult(&result);
  diag::detail::AbortImpl();
}

}
