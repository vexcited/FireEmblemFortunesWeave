#include "nn/mii/core_data.hpp"

namespace nn::mii {

void Nickname::Set(const uint16_t* source) {
  for (auto& value : text) {
    value = 0;
  }

  for (unsigned i = 0; i < 10 && source[i] != 0; ++i) {
    text[i] = source[i];
  }
}

bool Nickname::IsValid() const {
  if (text[0] == 0 || text[10] != 0) {
    return false;
  }

  unsigned end = 1;

  while (end < 10 && text[end] != 0) {
    ++end;
  }

  for (; end <= 10; ++end) {
    if (text[end] != 0) {
      return false;
    }
  }

  return true;
}

bool Nickname::IsEmpty() const {
  uint16_t combined = 0;

  for (auto value : text) {
    combined |= value;
  }

  return combined == 0;
}

bool Nickname::operator==(const Nickname& other) const {
  for (unsigned i = 0; i < 11; ++i) {
    if (text[i] != other.text[i]) {
      return false;
    }
  }

  return true;
}

bool CreateId::IsNil() const {
  uint8_t combined = 0;

  for (auto value : data) {
    combined |= value;
  }

  return combined == 0;
}

bool CreateId::IsValid() const {
  return !IsNil() && data[8] >= 0x80 && data[8] < 0xC0;
}

bool CreateId::operator==(const CreateId& other) const {
  if (!IsValid()) {
    return false;
  }

  for (unsigned i = 0; i < 16; ++i) {
    if (data[i] != other.data[i]) {
      return false;
    }
  }

  return true;
}

bool CreateId::operator!=(const CreateId& other) const {
  return !(*this == other);
}

}
