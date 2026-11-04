#pragma once

#include <stdint.h>

#include "nn/util/binary_format.hpp"
#include "nn/util/string_view.hpp"

namespace nn::util {

struct BinString {
  uint16_t _length;
  char _str[2];

  string_view Get() const {
    return string_view(_str, _length);
  }
};

class ResDic {
public:
  struct Entry {
    int32_t refBit;
    uint16_t children[2];
    const BinString* key;
  };

  bool Build();
  static int FindRefBit(const string_view& lhs, const string_view& rhs);

  uint32_t _signature;
  int32_t _count;
  Entry _entries[1];

private:
  static int ExtractRefBit(const string_view& key, int refBit) {
    size_t index = refBit >> 3;
    if (index < key.length()) {
      return (key[key.length() - index - 1] >> (refBit & 7)) & 1;
    }
    return 0;
  }
};

class ResEndian {
public:
  bool IsHostEndian() const {
    return m_IsHostEndian;
  }

private:
  void* m_Base;
  bool m_IsHostEndian;
};

void SwapEndian(ResEndian* endian, ResDic* dic);
void SwapEndian(ResEndian* endian, StringPool* pool);

}
