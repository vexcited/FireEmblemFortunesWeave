#include <math.h>

#include "nn/srepo/detail/srepo_verifier.hpp"

namespace nn::srepo::detail {

bool VerifyFloatValue(float value) {
  return isfinite(value);
}

bool VerifyDoubleValue(double value) {
  return isfinite(value);
}

bool VerifyBinaryValue(const void* value, size_t size) {
  return value != nullptr || size == 0;
}

bool IsSameValueType(util::MessagePackReader::AnyDataType lhs,
  util::MessagePackReader::AnyDataType rhs) {
  using Type = util::MessagePackReader::AnyDataType;
  if (lhs == rhs) {
    return true;
  }

  // Integers of either sign and floats of either width are interchangeable.
  const bool lhsIsInteger = lhs == Type::AnyDataType_UnsignedInteger ||
    lhs == Type::AnyDataType_SignedInteger;
  const bool rhsIsInteger = rhs == Type::AnyDataType_UnsignedInteger ||
    rhs == Type::AnyDataType_SignedInteger;
  const bool lhsIsFloat =
    lhs == Type::AnyDataType_Float32 || lhs == Type::AnyDataType_Float64;
  const bool rhsIsFloat =
    rhs == Type::AnyDataType_Float32 || rhs == Type::AnyDataType_Float64;
  return (lhsIsInteger && rhsIsInteger) || (lhsIsFloat && rhsIsFloat);
}

}
