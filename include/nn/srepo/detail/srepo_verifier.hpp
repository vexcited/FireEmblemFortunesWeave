#pragma once

#include <stddef.h>

#include "nn/util/message_pack.hpp"

namespace nn::srepo::detail {

bool VerifyFloatValue(float value);
bool VerifyDoubleValue(double value);
bool VerifyBinaryValue(const void* value, size_t size);
bool IsSameValueType(util::MessagePackReader::AnyDataType lhs,
  util::MessagePackReader::AnyDataType rhs);

}
