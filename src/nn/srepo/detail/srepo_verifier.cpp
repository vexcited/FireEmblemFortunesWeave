#include <math.h>

#include "nn/srepo/detail/srepo_verifier.hpp"

namespace nn::srepo::detail {

namespace {

constexpr size_t kEventIdLengthMax = 31;
constexpr size_t kKeyLengthMax = 63;

bool IsDigit(char c) {
  return c >= '0' && c <= '9';
}

bool IsLower(char c) {
  return c >= 'a' && c <= 'z';
}

bool IsUpper(char c) {
  return c >= 'A' && c <= 'Z';
}

bool IsKeyHead(char c) {
  return IsLower(c) || c == '_' || IsUpper(c);
}

bool IsKeyChar(char c) {
  return IsDigit(c) || IsKeyHead(c);
}

}

bool VerifyEventId(size_t* pOutLength, const char* id) {
  if (id == nullptr) {
    return false;
  }
  const char* p = id;
  while (*p != '\0') {
    if (!IsDigit(*p) && !IsLower(*p) && *p != '_') {
      return false;
    }
    p++;
    if (static_cast<size_t>(p - id) > kEventIdLengthMax) {
      return false;
    }
  }
  *pOutLength = p - id;
  return p != id;
}

// The old keys also allow colons and start with any key character.
bool VerifyKeyOld(const char* key, size_t length) {
  if (key == nullptr || length - 1 >= kKeyLengthMax) {
    return false;
  }
  for (size_t i = 0; i < length; i++) {
    if (!IsKeyChar(key[i]) && key[i] != ':') {
      return false;
    }
  }
  return true;
}

bool VerifyKey(size_t* pOutLength, const char* key) {
  if (key == nullptr || !IsKeyHead(key[0])) {
    return false;
  }
  size_t length = 1;
  while (length <= kKeyLengthMax && IsKeyChar(key[length])) {
    length++;
  }
  if (length - 1 >= kKeyLengthMax || key[length] != '\0') {
    return false;
  }
  *pOutLength = length;
  return true;
}

bool VerifyKey(const char* key, size_t length) {
  if (key == nullptr || length - 1 >= kKeyLengthMax) {
    return false;
  }
  if (!IsKeyHead(key[0])) {
    return false;
  }
  size_t i = 1;
  while (i < length && IsKeyChar(key[i])) {
    i++;
  }
  return i == length;
}

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
