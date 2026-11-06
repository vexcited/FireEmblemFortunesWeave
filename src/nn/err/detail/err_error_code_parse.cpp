#include <stdlib.h>
#include <string.h>

#include "nn/err/err_types.hpp"
#include "nn/util/string_util.hpp"

namespace nn::err::detail {

namespace {

const size_t ErrorCodeStringLengthMax = 14;

bool IsNumber(const char* string) {
  const size_t length = strlen(string);
  for (size_t i = 0; i < length; i++) {
    if (string[i] < '0' || string[i] > '9') {
      return false;
    }
  }
  return true;
}

}

bool TryParseErrorCodeString(ErrorCode* pOut, const char* string) {
  if (strlen(string) > ErrorCodeStringLengthMax) {
    return false;
  }

  char category[ErrorCodeStringLengthMax + 1] = {};
  const char* hyphen = strchr(string, '-');
  if (hyphen == nullptr) {
    return false;
  }

  util::Strlcpy(category, string, static_cast<int>(hyphen - string) + 1);
  const char* number = hyphen + 1;
  if (category[0] == '\0' || *number == '\0') {
    return false;
  }
  if (!IsNumber(category) || !IsNumber(number)) {
    return false;
  }

  pOut->category = atoi(category);
  pOut->number = atoi(number);
  return true;
}

bool TryParseApplicationErrorCodeString(
  ns::ApplicationErrorCodePrefix* pOutPrefix,
  ns::ApplicationErrorCodeCategory* pOutCategory, uint32_t* pOutNumber,
  const char* string) {
  if (strlen(string) > ErrorCodeStringLengthMax) {
    return false;
  }

  const char* first = strchr(string, '-');
  if (first == nullptr) {
    return false;
  }
  const char* second = strchr(first + 1, '-');
  if (second == nullptr) {
    return false;
  }

  const int prefixLength = static_cast<int>(first - string);
  if (prefixLength < 1 || prefixLength > 3) {
    return false;
  }
  char prefix[4] = {};
  util::Strlcpy(prefix, string, prefixLength + 1);
  if (!IsNumber(prefix)) {
    return false;
  }

  const int categoryLength = static_cast<int>(second - first) - 1;
  if (categoryLength < 1 || categoryLength > 7) {
    return false;
  }
  const char* number = second + 1;
  if (*number == '\0' || !IsNumber(number)) {
    return false;
  }

  pOutPrefix->value = atoi(prefix);
  util::Strlcpy(pOutCategory->value, first + 1, categoryLength + 1);
  *pOutNumber = atoi(number);
  return true;
}

}
