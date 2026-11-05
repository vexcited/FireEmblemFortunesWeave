#include "nn/err/err_types.hpp"
#include "nn/util/util_format_string.hpp"

namespace nn::err::detail {

namespace {

// Applications without a prefix report as prefix 2.
const uint32_t DefaultApplicationErrorCodePrefix = 2;

}

int MakeApplicationErrorCodeString(char* buffer, size_t size,
  const ns::ApplicationErrorCodePrefix& prefix,
  const ns::ApplicationErrorCodeCategory& category, uint32_t number) {
  const uint32_t prefixValue = prefix.value != 0 ?
    prefix.value : DefaultApplicationErrorCodePrefix;
  return util::TSNPrintf(
    buffer, size, "%u-%s-%04u", prefixValue, category.value, number);
}

}
