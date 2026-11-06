#pragma once

#include <stdint.h>
#include <string.h>

namespace nn::http::json {

template <int DepthMax, int LengthMax, bool IsStrict>
class JsonPath {
 public:
  bool Match(const char* path) const {
    return strncmp(m_Path, path, m_Length + 1) == 0;
  }

 private:
  uint8_t m_Nodes[104];
  char m_Path[LengthMax + 2];
  uint16_t m_Length;
};

}
