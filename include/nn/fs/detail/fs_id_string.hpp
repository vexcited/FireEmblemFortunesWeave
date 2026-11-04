#pragma once

#include "nn/fs/fs_types.hpp"

namespace nn::fs::detail {

class IdString {
public:
  template<typename T>
  const char* ToString(T id);

private:
  const char* ToValueString(int id);

  char m_Buffer[32];
};

}
