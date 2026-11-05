#include "nn/bcat/bcat_types.hpp"

namespace nn::bcat {

namespace {

bool IsAlphaNumeric(char c) {
  return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
    (c >= 'a' && c <= 'z');
}

}

bool FileName::IsValid() const {
  int length = 0;
  for (; length < static_cast<int>(sizeof(value)); length++) {
    const char c = value[length];
    if (c == '\0') {
      break;
    }
    if (!IsAlphaNumeric(c) && c != '_' && c != '.') {
      return false;
    }
  }

  if (length == 0 || length == static_cast<int>(sizeof(value))) {
    return false;
  }
  if (value[length] != '\0') {
    return false;
  }

  return value[length - 1] != '.';
}

bool DirectoryName::IsValid() const {
  int length = 0;
  for (; length < static_cast<int>(sizeof(value)); length++) {
    const char c = value[length];
    if (c == '\0') {
      break;
    }
    if (!IsAlphaNumeric(c) && c != '_' && c != '-') {
      return false;
    }
  }

  if (length == 0 || length == static_cast<int>(sizeof(value))) {
    return false;
  }

  return value[length] == '\0';
}

}
