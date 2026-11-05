#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::settings {

struct LanguageCode;

}

namespace nn::ns {

struct ApplicationErrorCodePrefix {
  uint8_t value;
};

struct ApplicationErrorCodeCategory {
  char value[8];
};

}

namespace nn::err {

struct ErrorCode {
  uint32_t category;
  uint32_t number;
};

struct CallerIdentifier {
  uint64_t value;
};

struct ResultBacktrace {
  int32_t count;
  Result results[32];
};

struct ErrorContext {
  alignas(8) uint8_t data[512];
};

struct ErrorMessageDatabaseVersion;

enum ErrorMessageDatabaseType : int32_t {};

ErrorCode MakeErrorCode(uint32_t category, uint32_t number);
ErrorCode ConvertResultToErrorCode(const Result& result);
bool IsDisplayableErrorCode(ErrorCode errorCode);
Result GetErrorMessageDatabaseVersion(
  ErrorMessageDatabaseVersion* pOutVersion, ErrorMessageDatabaseType type);

namespace detail {

void ReadVersion(
  ErrorMessageDatabaseVersion* pOutVersion, ErrorMessageDatabaseType type);
int MakeApplicationErrorCodeString(char* buffer, size_t size,
  const ns::ApplicationErrorCodePrefix& prefix,
  const ns::ApplicationErrorCodeCategory& category, uint32_t number);

}

}
