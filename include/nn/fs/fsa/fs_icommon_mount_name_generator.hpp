#pragma once

#include <stddef.h>

#include "nn/result.hpp"

namespace nn::fs::fsa {

class ICommonMountNameGenerator {
public:
  virtual Result GenerateCommonMountName(char* name, size_t nameSize) = 0;
  virtual ~ICommonMountNameGenerator() {}
};

}
