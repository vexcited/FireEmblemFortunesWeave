#pragma once

#include <stddef.h>

#include "nn/util/message_pack.hpp"

namespace nn::srepo::detail {

bool VerifyEventId(size_t* pOutLength, const char* id);
bool VerifyKeyOld(const char* key, size_t length);
bool VerifyKey(size_t* pOutLength, const char* key);
bool VerifyKey(const char* key, size_t length);
bool VerifyStringValueLength(size_t* pOutLength, const char* value,
  size_t sizeMax);
bool IsSameNestedType(const uint8_t* lhs, size_t lhsSize, size_t lhsCount,
  const uint8_t* rhs, size_t rhsSize, size_t rhsCount, bool isMap,
  size_t depth);
bool VerifyFloatValue(float value);
bool VerifyDoubleValue(double value);
bool VerifyBinaryValue(const void* value, size_t size);
bool IsSameValueType(util::MessagePackReader::AnyDataType lhs,
  util::MessagePackReader::AnyDataType rhs);

}
