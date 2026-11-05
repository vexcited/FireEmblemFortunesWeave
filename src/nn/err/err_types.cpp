#include "nn/err/err_types.hpp"

namespace nn::err {

namespace {

// Result based error codes use the module offset by 2000 as category.
const uint32_t ResultCategoryBase = 2000;
const uint32_t ResultCategoryCount = 1000;
const uint32_t ErrorNumberCount = 10000;

}

ErrorCode MakeErrorCode(uint32_t category, uint32_t number) {
  return ErrorCode{category, number};
}

ErrorCode ConvertResultToErrorCode(const Result& result) {
  return ErrorCode{(result.value & 0x1ff) + ResultCategoryBase,
    (result.value >> 9) & 0x1fff};
}

bool IsDisplayableErrorCode(ErrorCode errorCode) {
  return errorCode.number < ErrorNumberCount &&
    errorCode.category - ResultCategoryBase < ResultCategoryCount;
}

Result GetErrorMessageDatabaseVersion(
  ErrorMessageDatabaseVersion* pOutVersion, ErrorMessageDatabaseType type) {
  detail::ReadVersion(pOutVersion, type);
  return Result{0};
}

}
